/* C140.h */

#pragma once

#ifndef __C140_H__
#define __C140_H__

#define C140_MAX_VOICE 24

enum
{
	C140_TYPE_SYSTEM2,
	C140_TYPE_SYSTEM21,
	C140_TYPE_ASIC219
};

//**************************************************************************
//  INTERFACE CONFIGURATION MACROS
//**************************************************************************

#define MCFG_C140_ADD(_tag, _clock) \
	MCFG_DEVICE_ADD(_tag, C140, _clock)
#define MCFG_C140_REPLACE(_tag, _clock) \
	MCFG_DEVICE_REPLACE(_tag, C140, _clock)


//**************************************************************************
//  TYPE DEFINITIONS
//**************************************************************************

struct c140_interface
{
	int banking_type;
};


struct C140_VOICE
{
	C140_VOICE() :
		ptoffset(0),
		pos(0),
		key(0),
		lastdt(0),
		prevdt(0),
		dltdt(0),
		rvol(0),
		lvol(0),
		frequency(0),
		bank(0),
		mode(0),
		sample_start(0),
		sample_end(0),
		sample_loop(0) {}

	long    ptoffset;
	long    pos;
	long    key;
	//--work
	long    lastdt;
	long    prevdt;
	long    dltdt;
	//--reg
	long    rvol;
	long    lvol;
	long    frequency;
	long    bank;
	long    mode;

	long    sample_start;
	long    sample_end;
	long    sample_loop;
};


// ======================> c140_device

class c140_device : public device_t,
					public device_sound_interface
{
public:
	c140_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);
	~c140_device() { }

protected:
	// device-level overrides
	virtual void device_start();

	// sound stream update overrides
	virtual void sound_stream_update(sound_stream &stream, stream_sample_t **inputs, stream_sample_t **outputs, int samples);

public:
	DECLARE_READ8_MEMBER( c140_r );
	DECLARE_WRITE8_MEMBER( c140_w );

public:
	void set_base(void *base);

private:
	void init_voice( C140_VOICE *v );
	long find_sample(long adrs, long bank, int voice);

private:
	int m_sample_rate;
	sound_stream *m_stream;
	int m_banking_type;
	/* internal buffers */
	INT16 *m_mixer_buffer_left;
	INT16 *m_mixer_buffer_right;

	int m_baserate;
	void *m_pRom;
	UINT8 m_REG[0x200];

	INT16 m_pcmtbl[8];        //2000.06.26 CAB

	C140_VOICE m_voi[C140_MAX_VOICE];
};

extern const device_type C140;


#endif /* __C140_H__ */
