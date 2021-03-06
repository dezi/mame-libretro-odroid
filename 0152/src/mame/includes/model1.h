#include "audio/dsbz80.h"
#include "audio/segam1audio.h"

typedef void (*tgp_func)(running_machine &machine);

enum {FIFO_SIZE = 256};
enum {MAT_STACK_SIZE = 32};

class model1_state : public driver_device
{
public:
	model1_state(const machine_config &mconfig, device_type type, const char *tag)
		: driver_device(mconfig, type, tag),
		m_maincpu(*this, "maincpu"),
		m_m1audio(*this, "m1audio"),
		m_dsbz80(*this, DSBZ80_TAG),
		m_tgp(*this, "tgp"),
		m_mr2(*this, "mr2"),
		m_mr(*this, "mr"),
		m_display_list0(*this, "display_list0"),
		m_display_list1(*this, "display_list1"),
		m_color_xlat(*this, "color_xlat"){ }

	required_device<cpu_device> m_maincpu;      // V60
	required_device<segam1audio_device> m_m1audio;  // Model 1 standard sound board
	optional_device<dsbz80_device> m_dsbz80;    // Digital Sound Board
	optional_device<mb86233_cpu_device> m_tgp;

	required_shared_ptr<UINT16> m_mr2;
	required_shared_ptr<UINT16> m_mr;
	required_shared_ptr<UINT16> m_display_list0;
	required_shared_ptr<UINT16> m_display_list1;
	required_shared_ptr<UINT16> m_color_xlat;

	struct view *m_view;
	struct point *m_pointdb;
	struct point *m_pointpt;
	struct quad_m1 *m_quaddb;
	struct quad_m1 *m_quadpt;
	struct quad_m1 **m_quadind;
	int m_sound_irq;
	UINT8 m_last_snd_cmd;
	int m_snd_cmd_state;
	int m_last_irq;
	int m_dump;
	offs_t m_pushpc;
	int m_fifoin_rpos;
	int m_fifoin_wpos;
	UINT32 m_fifoin_data[FIFO_SIZE];
	int m_swa;
	int m_fifoin_cbcount;
	tgp_func m_fifoin_cb;
	INT32 m_fifoout_rpos;
	INT32 m_fifoout_wpos;
	UINT32 m_fifoout_data[FIFO_SIZE];
	UINT32 m_list_length;
	float m_cmat[12];
	float m_mat_stack[MAT_STACK_SIZE][12];
	float m_mat_vector[21][12];
	INT32 m_mat_stack_pos;
	float m_acc;
	float m_tgp_vf_xmin;
	float m_tgp_vf_xmax;
	float m_tgp_vf_zmin;
	float m_tgp_vf_zmax;
	float m_tgp_vf_ygnd;
	float m_tgp_vf_yflr;
	float m_tgp_vf_yjmp;
	float m_tgp_vr_circx;
	float m_tgp_vr_circy;
	float m_tgp_vr_circrad;
	float m_tgp_vr_cbox[12];
	int m_tgp_vr_select;
	UINT16 m_ram_adr;
	UINT16 m_ram_latch[2];
	UINT16 m_ram_scanadr;
	UINT32 *m_ram_data;
	float m_tgp_vr_base[4];
	int m_puuu;
	int m_ccount;
	UINT32 m_copro_r;
	UINT32 m_copro_w;
	int m_copro_fifoout_rpos;
	int m_copro_fifoout_wpos;
	UINT32 m_copro_fifoout_data[FIFO_SIZE];
	int m_copro_fifoout_num;
	int m_copro_fifoin_rpos;
	int m_copro_fifoin_wpos;
	UINT32 m_copro_fifoin_data[FIFO_SIZE];
	int m_copro_fifoin_num;
	UINT32 m_vr_r;
	UINT32 m_vr_w;
	UINT16 m_listctl[2];
	UINT16 *m_glist;
	int m_render_done;
	UINT16 *m_tgp_ram;
	UINT16 *m_paletteram16;
	UINT32 *m_poly_rom;
	UINT32 *m_poly_ram;
	UINT16 m_lamp_state;
	DECLARE_READ16_MEMBER(io_r);
	DECLARE_WRITE16_MEMBER(io_w);
	DECLARE_READ16_MEMBER(fifoin_status_r);
	DECLARE_WRITE16_MEMBER(bank_w);
	DECLARE_READ16_MEMBER(network_ctl_r);
	DECLARE_WRITE16_MEMBER(network_ctl_w);
	DECLARE_WRITE16_MEMBER(md1_w);
	DECLARE_WRITE16_MEMBER(md0_w);
	DECLARE_WRITE16_MEMBER(p_w);
	DECLARE_WRITE16_MEMBER(mr_w);
	DECLARE_WRITE16_MEMBER(mr2_w);
	DECLARE_READ16_MEMBER(snd_68k_ready_r);
	DECLARE_WRITE16_MEMBER(snd_latch_to_68k_w);
	DECLARE_READ16_MEMBER(m1_snd_68k_latch_r);
	DECLARE_READ16_MEMBER(m1_snd_v60_ready_r);
	DECLARE_WRITE16_MEMBER(m1_snd_68k_latch1_w);
	DECLARE_WRITE16_MEMBER(m1_snd_68k_latch2_w);
	DECLARE_READ16_MEMBER(model1_tgp_copro_r);
	DECLARE_WRITE16_MEMBER(model1_tgp_copro_w);
	DECLARE_READ16_MEMBER(model1_tgp_copro_adr_r);
	DECLARE_WRITE16_MEMBER(model1_tgp_copro_adr_w);
	DECLARE_READ16_MEMBER(model1_tgp_copro_ram_r);
	DECLARE_WRITE16_MEMBER(model1_tgp_copro_ram_w);
	DECLARE_READ16_MEMBER(model1_tgp_vr_adr_r);
	DECLARE_WRITE16_MEMBER(model1_tgp_vr_adr_w);
	DECLARE_READ16_MEMBER(model1_vr_tgp_ram_r);
	DECLARE_WRITE16_MEMBER(model1_vr_tgp_ram_w);
	DECLARE_READ16_MEMBER(model1_vr_tgp_r);
	DECLARE_WRITE16_MEMBER(model1_vr_tgp_w);
	DECLARE_READ32_MEMBER(copro_ram_r);
	DECLARE_WRITE32_MEMBER(copro_ram_w);
	DECLARE_READ16_MEMBER(model1_listctl_r);
	DECLARE_WRITE16_MEMBER(model1_listctl_w);
	DECLARE_WRITE16_MEMBER(m1_snd_mpcm_bnk1_w);
	DECLARE_WRITE16_MEMBER(m1_snd_mpcm_bnk2_w);
	DECLARE_MACHINE_START(model1);
	DECLARE_MACHINE_RESET(model1);
	DECLARE_VIDEO_START(model1);
	DECLARE_MACHINE_RESET(model1_vr);
	UINT32 screen_update_model1(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	void screen_eof_model1(screen_device &screen, bool state);
	TIMER_DEVICE_CALLBACK_MEMBER(model1_interrupt);
	void irq_raise(int level);
	void irq_init();
	IRQ_CALLBACK_MEMBER(irq_callback);
	DECLARE_READ_LINE_MEMBER(copro_fifoin_pop_ok);
	DECLARE_READ32_MEMBER(copro_fifoin_pop);
	DECLARE_WRITE32_MEMBER(copro_fifoout_push);
};


/*----------- defined in machine/model1.c -----------*/

ADDRESS_MAP_EXTERN( model1_vr_tgp_map, 32 );

void model1_vr_tgp_reset( running_machine &machine );
void model1_tgp_reset(running_machine &machine, int swa);
