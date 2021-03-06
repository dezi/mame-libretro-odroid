/**********************************************************************

  Copyright (C) Antoine Mine' 2006

  Motorola 6854 emulation (network interface).

**********************************************************************/

#ifndef MC6854_H
#define MC6854_H


#define MAX_FRAME_LENGTH 65536
/* arbitrary value, you may need to enlarge it if you get truncated frames */

#define MC6854_FIFO_SIZE 3
/* hardcoded size of the 6854 FIFO (this is a hardware limit) */


/* ---------- configuration ------------ */

struct mc6854_interface
{
	devcb_write_line  m_out_irq_cb; /* interrupt request */

	/* low-level, bit-based interface */
	devcb_write_line  m_out_txd_cb; /* transmit bit */

	/* high-level, frame-based interface */
	void ( * m_out_frame ) ( device_t *device, UINT8* data, int length );

	/* control lines */
	devcb_write_line  m_out_rts_cb; /* 1 = transmitting, 0 = idle */
	devcb_write_line  m_out_dtr_cb; /* 1 = data transmit ready, 0 = busy */
};


class mc6854_device : public device_t,
								public mc6854_interface
{
public:
	mc6854_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);
	~mc6854_device() {}

	/* interface to CPU via address/data bus*/
	DECLARE_READ8_MEMBER( read );
	DECLARE_WRITE8_MEMBER( write );

	/* low-level, bit-based interface */
	DECLARE_WRITE_LINE_MEMBER( set_rx );

	/* high-level, frame-based interface */
	int send_frame( UINT8* data, int length ); /* ret -1 if busy */

	/* control lines */
	DECLARE_WRITE_LINE_MEMBER( set_cts ); /* 1 = clear-to-send, 0 = busy */
	DECLARE_WRITE_LINE_MEMBER( set_dcd ); /* 1 = carrier, 0 = no carrier */

	/* clock */
	DECLARE_WRITE_LINE_MEMBER( rxc_w );
	DECLARE_WRITE_LINE_MEMBER( txc_w );

protected:
	// device-level overrides
	virtual void device_config_complete();
	virtual void device_start();
	virtual void device_reset();

private:
	// internal state
	devcb_resolved_write_line   m_out_irq_func;
	devcb_resolved_write_line   m_out_txd_func;
	devcb_resolved_write_line   m_out_rts_func;
	devcb_resolved_write_line   m_out_dtr_func;

	/* registers */
	UINT8 m_cr1, m_cr2, m_cr3, m_cr4; /* control registers */
	UINT8 m_sr1, m_sr2;           /* status registers */

	UINT8 m_cts, m_dcd;

	/* transmit state */
	UINT8  m_tstate;
	UINT16 m_tfifo[MC6854_FIFO_SIZE];  /* X x 8-bit FIFO + full & last marker bits */
	UINT8  m_tones;             /* counter for zero-insertion */
	emu_timer *m_ttimer;       /* when to ask for more data */

	/* receive state */
	UINT8  m_rstate;
	UINT32 m_rreg;              /* shift register */
	UINT8  m_rones;             /* count '1 bits */
	UINT8  m_rsize;             /* bits in the shift register */
	UINT16 m_rfifo[MC6854_FIFO_SIZE];  /* X x 8-bit FIFO + full & addr marker bits */

	/* frame-based interface*/
	UINT8  m_frame[MAX_FRAME_LENGTH];
	UINT32 m_flen, m_fpos;


	/* meaning of tstate / rtate:
	   0 = idle / waiting for frame flag
	   1 = flag sync
	   2 = 8-bit address field(s)
	   3-4 = 8-bit control field(s)
	   5 = 8-bit logical control field(s)
	   6 = variable-length data field(s)
	*/

	void send_bits( UINT32 data, int len, int zi );
	void tfifo_push( UINT8 data );
	void tfifo_terminate( );
	TIMER_CALLBACK_MEMBER(tfifo_cb);
	void tfifo_clear( );

	void rfifo_push( UINT8 d );
	void rfifo_terminate( );
	UINT8 rfifo_pop( );
	void rfifo_clear( );

	void update_sr2( );
	void update_sr1( );
};

extern const device_type MC6854;


/* we provide two interfaces:
   - a bit-based interface:   out_tx, set_rx
   - a frame-based interface: out_frame, send_frame

   The bit-based interface is low-level and slow.
   Use it to simulate the actual bits sent into the wires, e.g., to connect
   the emulator to another bit-based emulated network device, or an actual
   device.

   The frame-based interface is higher-level and faster.
   It passes bytes directly from one end to the other without bothering with
   the actual bit-encoding, synchronization, and CRC.
   Once completed, a frame is sent through out_frame. Aborted frames are not
   transmitted at all. No start flag, stop flag, or crc bits are trasmitted.
   send_frame makes a frame available to the CPU through the 6854 (it may
   fail and return -1 if the 6854 is not ready to accept the frame; even
   if the frame is accepted and 0 is returned, the CPU may abort it). Ony
   full frames are accepted.
*/


#define MCFG_MC6854_ADD(_tag, _intrf) \
	MCFG_DEVICE_ADD(_tag, MC6854, 0)          \
	MCFG_DEVICE_CONFIG(_intrf)

#define MCFG_MC6854_REMOVE(_tag)        \
	MCFG_DEVICE_REMOVE(_tag)


#endif
