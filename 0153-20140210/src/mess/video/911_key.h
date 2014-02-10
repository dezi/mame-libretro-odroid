/*
    key translation table for both US and UK terminals

    The only difference is that the US # character is a Pound character in UK.
*/
static const unsigned char US_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x3B,
		0x27,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x7A,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3B,
		0x27,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5B,
		0x5D,
		0x3D,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x8A,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3A,
		0x22,
		0,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x7C,
		0x60,
		0x7E,
		0x1D,
		0x7F,
		0x5C,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x7B,
		0x7D,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x1A,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	}
};


/*
    key translation table for French terminals
*/
static const unsigned char French_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x61,
		0x7A,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x71,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x6D,
		0x27,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x77,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x3B,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x41,
		0x5A,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x51,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x4D,
		0x27,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x57,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x3B,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5B,
		0x5D,
		0x3D,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x41,
		0x5A,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x8A,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x51,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x4D,
		0x22,
		0,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x57,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x3A,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x7C,
		0x60,
		0x7E,
		0x1D,
		0x7F,
		0x5C,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x01,
		0x1A,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x11,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x0D,
		0x7D,
		0,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x17,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x7B,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	}
};


/*
    key translation table for German terminals
*/
static const unsigned char German_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x7E,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x7A,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x7D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x7C,
		0x7B,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x79,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x27,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x5A,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5C,
		0x5B,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x59,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5F,
		0x3D,
		0x22,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x5A,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x8A,
		0x8C,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5C,
		0x5B,
		0x3A,
		0x83,   /* 945423-9701 rev. B says 0x85, but it must be a mistake */

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x59,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x7C,
		0x60,
		0x00,
		0x1D,
		0x7F,
		0x00,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x1A,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x00,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x00,
		0x00,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x19,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	}
};


/*
    key translation table for Swedish/Finnish terminals
*/
static const unsigned char Swedish_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x7E,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x7D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x7C,
		0x7B,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x7A,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x27,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5C,
		0x5B,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5F,
		0x3D,
		0x22,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x8A,
		0x8C,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5C,
		0x5B,
		0x3A,
		0x83,   /* 945423-9701 rev. B says 0x85, but it must be a mistake */

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x00,
		0x60,
		0x00,
		0x1D,
		0x7F,
		0x00,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x00,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x00,
		0x00,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x1A,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	}
};


/*
    key translation table for Norwegian/Danish terminals
*/
static const unsigned char Norwegian_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x27,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x7D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x7B,
		0x7C,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x7A,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x27,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x88,
		0x87,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5B,
		0x5C,
		0x3B,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5F,
		0x3D,
		0x22,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x5D,
		0x8A,   /* 945423-9701 rev. B says 0x88, but it must be a mistake */
		0x8C,   /* 945423-9701 rev. B says 0x87, but it must be a mistake */

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x5B,
		0x5C,
		0x3A,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x00,
		0x60,
		0x00,
		0x1D,
		0x7F,
		0x00,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x00,
		0x88,   /* 945423-9701 rev. B says 0x8A, but it must be a mistake */
		0x87,   /* 945423-9701 rev. B says 0x8C, but it must be a mistake */

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x00,
		0x00,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x1A,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0x0D
	}
};


/*
    key translation table for Japanese katakana terminals
*/
static const unsigned char Japanese_key_translate[6][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x3B,
		0x27,
		0x5C,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x7A,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3B,
		0x27,
		0x5C,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5B,
		0x5D,
		0x3D,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x8A,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3A,
		0x22,
		0x00,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x7C,
		0x60,
		0x7E,
		0x1D,
		0x7F,
		0x5C,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays the back quote character, whereas it actually display the Yen symbol) */
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x7B,
		0x7D,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x1A,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* katakana */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0xC7,
		0xCC,
		0xB1,
		0xB3,
		0xB4,
		0xB5,
		0xD4,
		0xD5,
		0xD6,
		0xDC,
		0xCE,
		0xCD,
		0xDB,
		0x1B,   /* 945423-9701 rev. B says 0x00, but it must be a mistake */

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0xC0,
		0xC3,
		0xB2,
		0xBD,
		0xB6,
		0xDD,
		0xC5,
		0xC6,
		0xD7,
		0xBE,
		0x88,   /* 945423-9701 rev. B says 0x00, but it must be a mistake */
		0x87,   /* 945423-9701 rev. B says 0x00, but it must be a mistake */
		0x0D,   /* 945423-9701 rev. B says 0x00, but it must be a mistake */

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0xC1,
		0xC4,
		0xBC,
		0xCA,
		0xB7,
		0xB8,
		0xCF,
		0xC9,
		0xD8,   /* 945423-9701 rev. B says 0xC8, but it must be a mistake */
		0xDA,
		0xB9,
		0xD1,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0xC2,
		0xBB,
		0xBF,
		0xCB,
		0xBA,
		0xD0,
		0xD3,
		0xC8,
		0xD9,
		0xD2,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* shifted katakana */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x00,
		0x00,
		0xA7,
		0xA9,
		0xAA,
		0xAB,
		0xAC,
		0xAD,
		0xAE,
		0xA6,
		0xDE,
		0xDF,
		0xB0,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x00,
		0x00,
		0xAB,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x8A,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0xA2,
		0xA3,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0xAF,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0xA4,
		0xA1,
		0xA5,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	}
};


#if 0
/*
    key translation table for Arabic terminals
*/
static const unsigned char Arabic_key_translate[6][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x71,
		0x77,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x61,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x3B,
		0x27,
		0x5C,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x7A,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x6D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x2B,
		0x2D,
		0x5F,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3B,
		0x27,
		0x5C,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x2C,
		0x2E,
		0x2F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x21,
		0x40,
		0x23,
		0x24,
		0x25,
		0x5E,
		0x26,
		0x2A,
		0x28,
		0x29,
		0x5B,
		0x5D,
		0x3D,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x51,
		0x57,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x8A,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x41,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x3A,
		0x22,
		0x00,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x5A,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x4D,
		0x3C,
		0x3E,
		0x3F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x7C,
		0x60,
		0x7E,
		0x1D,
		0x7F,
		0x5C,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x11,
		0x17,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x88,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x01,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x7B,
		0x7D,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x1A,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x0D,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2E,

		0,
		0x20,
		0
	},
	{   /* arabic */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0xC7,
		0xCC,
		0xB1,
		0xB3,
		0xB4,
		0xB5,
		0xD4,
		0xD5,
		0xD6,
		0xDC,
		0xCE,
		0xCD,
		0xDB,
		0x1B,

		0x37,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x38,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x39,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x9A,
		0x89,
		0,

		0xA0,
		0xC0,
		0xC3,
		0xB2,
		0xBD,
		0xB6,
		0xDD,
		0xC5,
		0xC6,
		0xD7,
		0xBE,
		0x88,
		0x87,
		0x0D,

		0x34,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x35,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x36,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x88,
		0x82,
		0x8A,

		0,
		0xC1,
		0xC4,
		0xBC,
		0xCA,
		0xB7,
		0xB8,
		0xCF,
		0xC9,
		0xD8,
		0xDA,
		0xB9,
		0xD1,
		0x85,

		0x31,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x32,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x33,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x86,
		0x8B,
		0x84,

		0,
		0xC2,
		0xBB,
		0xBF,
		0xCB,
		0xBA,
		0xD0,
		0xD3,
		0xC8,
		0xD9,
		0xD2,
		0,

		0x30,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x2E,

		0,
		0x20,
		0
	},
	{   /* shifted arabic */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x00,
		0x00,
		0xA7,
		0xA9,
		0xAA,
		0xAB,
		0xAC,
		0xAD,
		0xAE,
		0xA6,
		0xDE,
		0xDF,
		0xB0,
		0x1B,

		0x37,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x38,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x39,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x9A,
		0x89,
		0,

		0xA0,
		0x00,
		0x00,
		0xAB,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x8A,
		0x8C,
		0x0D,

		0x34,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x35,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x36,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x88,
		0x82,
		0x8A,

		0,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0xA2,
		0xA3,
		0x83,

		0x31,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x32,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x33,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */


		0x86,
		0x8B,
		0x84,

		0,
		0xAF,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0xA4,
		0xA1,
		0xA5,
		0,

		0x30,   /* 945423-9701 rev. B says so, but it might be a mistake (it claims it displays arabic-style digits, whereas it actually displays western-style digits) */
		0x2E,

		0,
		0x20,
		0
	}
};
#endif


/*
    key translation table for French word-processing terminals
*/
static const unsigned char FrenchWP_key_translate[4][91] =
{
	{   /* lower case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x26,
		0x7B,
		0x22,
		0x27,
		0x28,
		0x5D,
		0x7D,
		0x21,
		0x5C,
		0x40,
		0x29,
		0x2D,
		0x24,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x61,
		0x7A,
		0x65,
		0x72,
		0x74,
		0x79,
		0x75,
		0x69,
		0x6F,
		0x70,
		0x5E,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x71,
		0x73,
		0x64,
		0x66,
		0x67,
		0x68,
		0x6A,
		0x6B,
		0x6C,
		0x6D,
		0x7C,
		0x2A,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x77,
		0x78,
		0x63,
		0x76,
		0x62,
		0x6E,
		0x2C,
		0x3B,
		0x3A,
		0x3D,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* upper case */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x5B,
		0x5F,
		0x23,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x41,
		0x5A,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x7E,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x51,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x4D,
		0x25,
		0x60,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x57,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x3F,
		0x2E,
		0x2F,
		0x2B,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* shifted */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x31,
		0x32,
		0x33,
		0x34,
		0x35,
		0x36,
		0x37,
		0x38,
		0x39,
		0x30,
		0x5B,
		0x5F,
		0x23,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x41,
		0x5A,
		0x45,
		0x52,
		0x54,
		0x59,
		0x55,
		0x49,
		0x4F,
		0x50,
		0x7E,
		0x8C,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x51,
		0x53,
		0x44,
		0x46,
		0x47,
		0x48,
		0x4A,
		0x4B,
		0x4C,
		0x4D,
		0x25,
		0x60,
		0x83,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x57,
		0x58,
		0x43,
		0x56,
		0x42,
		0x4E,
		0x3F,
		0x2E,
		0x2F,
		0x2B,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	},
	{   /* control */
		0x92,
		0x93,
		0x94,
		0x95,
		0x96,
		0x97,
		0x98,
		0x99,
		0x9B,
		0x9C,


		0x80,
		0x81,
		0x9F,

		0,
		0x90,
		0x91,
		0x00,
		0xA1,
		0x8D,
		0x8E,
		0x8F,
		0x3C,
		0x3E,
		0x00,
		0x1D,
		0x7F,
		0x00,
		0x1B,

		0x37,
		0x38,
		0x39,


		0x9A,
		0x89,
		0,

		0xA0,
		0x01,
		0x1A,
		0x05,
		0x12,
		0x14,
		0x19,
		0x15,
		0x09,
		0x0F,
		0x10,
		0x00,
		0x87,
		0x0D,

		0x34,
		0x35,
		0x36,


		0x88,
		0x82,
		0x8A,

		0,
		0x11,
		0x13,
		0x04,
		0x06,
		0x07,
		0x08,
		0x0A,
		0x0B,
		0x0C,
		0x0D,
		0x00,
		0x00,
		0x85,

		0x31,
		0x32,
		0x33,


		0x86,
		0x8B,
		0x84,

		0,
		0x17,
		0x18,
		0x03,
		0x16,
		0x02,
		0x0E,
		0x00,
		0x1C,
		0x1E,
		0x1F,
		0,

		0x30,
		0x2C,

		0,
		0x20,
		0
	}
};
