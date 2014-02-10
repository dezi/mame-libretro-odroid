#include <unistd.h>
#include <stdint.h>

#include "osdepend.h"

#include "emu.h"
#include "clifront.h"
#include "render.h"
#include "ui.h"
#include "uiinput.h"

#include "libretro.h" 

#include "log.h"

static int ui_ipt_pushchar=-1;

char g_rom_dir[1024];


#ifdef _WIN32
char slash = '\\';
#else
char slash = '/';
#endif





#define M16B

#include "retrorender.c"

static bool mouse_enable = false;
static bool videoapproach1_enable = false;
bool nagscreenpatch_enable = false; //TODO IN  0151

static void extract_basename(char *buf, const char *path, size_t size)
{
   const char *base = strrchr(path, '/');
   if (!base)
      base = strrchr(path, '\\');
   if (!base)
      base = path;

   if (*base == '\\' || *base == '/')
      base++;

   strncpy(buf, base, size - 1);
   buf[size - 1] = '\0';

   char *ext = strrchr(buf, '.');
   if (ext)
      *ext = '\0';
}

static void extract_directory(char *buf, const char *path, size_t size)
{
   strncpy(buf, path, size - 1);
   buf[size - 1] = '\0';

   char *base = strrchr(buf, '/');
   if (!base)
      base = strrchr(buf, '\\');

   if (base)
      *base = '\0';
   else
      buf[0] = '\0';
}
//============================================================
//  CONSTANTS
//============================================================
#define MAX_BUTTONS         16

#ifdef DEBUG_LOG
# define LOG(msg) fprintf(stderr, "%s\n", msg)
#else
# define LOG(msg)
#endif 

//============================================================
//  GLOBALS
//============================================================

typedef struct joystate_t {
	int button[MAX_BUTTONS];
	int a1[2];
	int a2[2];
}Joystate;

// rendering target
static render_target *our_target = NULL;

// input device
static input_device *retrokbd_device; // KEYBD
static input_device *mouse_device;    // MOUSE
static input_device *joy_device[2];// JOY0/JOY1
static input_device *Pad_device[2];// PAD0/PAD1

// state 
static UINT16 retrokbd_state[RETROK_LAST];
static int mouseLX,mouseLY;
static int mouseBUT[4];
static Joystate joystate[2];

//enables / disables tate mode
static int tate = 0;
static int screenRot = 0;
int vertical,orient;

static char MgamePath[1024];
static char MgameName[512];

static int FirstTimeUpdate = 1;

//============================================================
//  LIBCO
//============================================================
int pauseg=0; 

#include "libco/libco.h"

cothread_t mainThread;
cothread_t emuThread;

//============================================================
//  RETRO
//============================================================

#include "retromapper.c"
#include "retroinput.c"
#include "retroosd.c"

//============================================================
//  main
//============================================================

static const char* xargv[] = {
	"mamemini",
	"-joystick",
	"-noautoframeskip",
	"-samplerate",
	"48000",
	"-sound",
	"-contrast",
	"1.0",
	"-brightness",
	"1.0",
	"-gamma",
	"1.0",
	"-rompath",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,	
	NULL,		
	NULL,	
	NULL,	
	NULL,	
	NULL,	
	NULL,	
	NULL,	
	NULL,	
};

static int parsePath(char* path, char* gamePath, char* gameName) {
	int i;
	int slashIndex = -1;
	int dotIndex = -1;
	int len = strlen(path);
	if (len < 1) {
		return 0;
	}

	for (i = len - 1; i >=0; i--) {
		if (path[i] == '/') {
			slashIndex = i;
			break;
		} else
		if (path[i] == '.') {
			dotIndex = i;
		}
	}
	if (slashIndex < 0 || dotIndex < 0) {
		return 0;
	}

	strncpy(gamePath, path, slashIndex);
	gamePath[slashIndex] = 0;
	strncpy(gameName, path + (slashIndex + 1), dotIndex - (slashIndex + 1));
	gameName[dotIndex - (slashIndex + 1)] = 0;

	write_log("gamePath=%s gameName=%s\n", gamePath, gameName);
	return 1;
}

static int getGameInfo(char* gameName, int* rotation, int* driverIndex) {
	int gameFound = 0;
	int drvindex;
//FIXME for 0.149 , prevouisly in driver.h
#if 0
	//check invalid game name
	if (gameName[0] == 0) {
		return 0;
	}

	for (drvindex = 0; drivers[drvindex]; drvindex++) {
		if ( (drivers[drvindex]->flags & GAME_NO_STANDALONE) == 0 &&
			mame_strwildcmp(gameName, drivers[drvindex]->name) == 0 ) {
				gameFound = 1;
				*driverIndex = drvindex;
				*rotation = drivers[drvindex]->flags & 0x7;
				write_log("%-18s\"%s\" rot=%i \n", drivers[drvindex]->name, drivers[drvindex]->description, *rotation);
		}
	}
#else 
	gameFound = 1;
#endif
	return gameFound;
} 

#include "../portmedia/pmmidi.c"

int executeGame(char* path) {
	// cli_frontend does the heavy lifting; if we have osd-specific options, we
	// create a derivative of cli_options and add our own

	int paramCount;
	int result = 0;
	int gameRot=0;

	int driverIndex;

	FirstTimeUpdate = 1;

	screenRot = 0;

	//split the path to directory and the name without the zip extension
	result = parsePath(path, MgamePath, MgameName);
	if (result == 0) {
		write_log("parse path failed! path=%s\n", path);
		strcpy(MgameName,path );
	//	return -1;
	}

	//Find the game info. Exit if game driver was not found.
	if (getGameInfo(MgameName, &gameRot, &driverIndex) == 0) {
		write_log("game not found: %s\n", MgameName);
		return -2;
	}

	//tate enabled
	if (tate) {
		//horizontal game
		if (gameRot == ROT0) {
			screenRot = 1;
		} else
		if (gameRot &  ORIENTATION_FLIP_X) {
			write_log("*********** flip X \n");
			screenRot = 3;
		}

	} else
	{
		if (gameRot != ROT0) {
			screenRot = 1;
			if (gameRot &  ORIENTATION_FLIP_X) {
				write_log("*********** flip X \n");
				screenRot = 2;
			}
		}
	}

	write_log("creating frontend... game=%s\n", MgameName);
	
	

	//find how many parameters we have
	for (paramCount = 0; xargv[paramCount] != NULL; paramCount++)
	printf("args: %s\n",xargv[paramCount]);
  
	xargv[paramCount++] = (char*)g_rom_dir;
	printf("args: %s\n",xargv[paramCount]);

	xargv[paramCount++] = (char*)("-cfg_directory");
	printf("args: %s\n",xargv[paramCount]);

	char cfg_dir[256];
	sprintf(cfg_dir, "%s%c%s%c%s", retro_save_directory, slash, "mame", slash, "cfg");
	xargv[paramCount++] = (char*)(cfg_dir);
	printf("args: %s\n",xargv[paramCount]);

	xargv[paramCount++] = (char*)("-nvram_directory");
	printf("args: %s\n",xargv[paramCount]);

	char nv_dir[256];
	sprintf(nv_dir, "%s%c%s%c%s", retro_save_directory, slash, "mame", slash, "nvram");
	xargv[paramCount++] = (char*)(nv_dir);
	printf("args: %s\n",xargv[paramCount]);	

	xargv[paramCount++] = (char*)("-memcard_directory");
	printf("args: %s\n",xargv[paramCount]);

	char mem_dir[256];
	sprintf(mem_dir, "%s%c%s%c%s", retro_save_directory, slash, "mame", slash, "memcard");
	xargv[paramCount++] = (char*)(mem_dir);
	printf("args: %s\n",xargv[paramCount]);	
	
	xargv[paramCount++] = (char*)("-input_directory");
	printf("args: %s\n",xargv[paramCount]);

	char inp_dir[256];
	sprintf(inp_dir, "%s%c%s%c%s", retro_save_directory, slash, "mame", slash, "input");
	xargv[paramCount++] = (char*)(inp_dir);
	printf("args: %s\n",xargv[paramCount]);

	xargv[paramCount++] = (char*)("-samplepath");
	printf("args: %s\n",xargv[paramCount]);

	char samples_dir[256];
	sprintf(samples_dir, "%s%c%s%c%s", retro_system_directory, slash, "mame", slash, "samples");
	xargv[paramCount++] = (char*)(samples_dir);
	printf("args: %s\n",xargv[paramCount]);

	xargv[paramCount++] = (char*)("-artpath");
	printf("args: %s\n",xargv[paramCount]);

	char art_dir[256];
	sprintf(art_dir, "%s%c%s%c%s", retro_system_directory, slash, "mame", slash, "artwork");
	xargv[paramCount++] = (char*)(art_dir);
	printf("args: %s\n",xargv[paramCount]);
	
	if (tate) {
		if (screenRot == 3) {
			xargv[paramCount++] =(char*) "-rol";
		} else {
			xargv[paramCount++] = (char*)(screenRot ? "-mouse" : "-ror");
		}
	} else {
		if (screenRot == 2) {
			xargv[paramCount++] = (char*)"-rol";
		} else {
			xargv[paramCount++] = (char*)(screenRot ? "-ror" : "-mouse");
		}
	}

	xargv[paramCount++] = MgameName;

	write_log("executing frontend... params:%i\n", paramCount);

	for (int i = 0; xargv[i] != NULL; i++){
		write_log("%s ",xargv[i]);
		write_log("\n");
	}

	osd_init_midi();

	cli_options MRoptions;
	mini_osd_interface MRosd;
	cli_frontend frontend(MRoptions, MRosd);
	result = frontend.execute(paramCount, ( char **)xargv); 

	xargv[paramCount - 2] = NULL;

	return result;
} 
 
//============================================================
//  main
//============================================================

#ifdef __cplusplus
extern "C"
#endif
int mmain(int argc, const char *argv)
{
	static char gameName[1024];
	int result = 0;

	strcpy(gameName,argv);
	result = executeGame(gameName);
	return 1;
}
