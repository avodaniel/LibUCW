/*
 *	Sherlock Library -- Character Code Map (UTF-8 Version)
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 *
 *	This software may be freely distributed and used according to the terms
 *	of the GNU Lesser General Public License.
 */

/* Syntax: CHAR(code, uppercase, unaccented_version, accent_code, category) */

CHAR(0x00,0x00,0x00,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x01,0x01,0x01,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x02,0x02,0x02,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x03,0x03,0x03,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x04,0x04,0x04,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x05,0x05,0x05,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x06,0x06,0x06,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x07,0x07,0x07,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x08,0x08,0x08,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x09,0x09,0x09,CA_NONE,		_C_CTRL | _C_BLANK | _C_PRINT)		//	<control>
CHAR(0x0A,0x0A,0x0A,CA_NONE,		_C_CTRL | _C_BLANK)			//	<control>
CHAR(0x0B,0x0B,0x0B,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x0C,0x0C,0x0C,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x0D,0x0D,0x0D,CA_NONE,		_C_CTRL | _C_BLANK)			//	<control>
CHAR(0x0E,0x0E,0x0E,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x0F,0x0F,0x0F,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x10,0x10,0x10,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x11,0x11,0x11,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x12,0x12,0x12,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x13,0x13,0x13,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x14,0x14,0x14,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x15,0x15,0x15,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x16,0x16,0x16,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x17,0x17,0x17,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x18,0x18,0x18,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x19,0x19,0x19,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1A,0x1A,0x1A,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1B,0x1B,0x1B,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1C,0x1C,0x1C,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1D,0x1D,0x1D,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1E,0x1E,0x1E,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x1F,0x1F,0x1F,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x20,0x20,0x20,CA_NONE,		_C_BLANK | _C_PRINT)			//	SPACE
CHAR(0x21,0x21,0x21,CA_NONE,		_C_PRINT)				//	EXCLAMATION MARK
CHAR(0x22,0x22,0x22,CA_NONE,		_C_PRINT)				//	QUOTATION MARK
CHAR(0x23,0x23,0x23,CA_NONE,		_C_PRINT)				//	NUMBER SIGN
CHAR(0x24,0x24,0x24,CA_NONE,		_C_PRINT)				//	DOLLAR SIGN
CHAR(0x25,0x25,0x25,CA_NONE,		_C_PRINT)				//	PERCENT SIGN
CHAR(0x26,0x26,0x26,CA_NONE,		_C_PRINT)				//	AMPERSAND
CHAR(0x27,0x27,0x27,CA_NONE,		_C_PRINT)				//	APOSTROPHE
CHAR(0x28,0x28,0x28,CA_NONE,		_C_PRINT)				//	LEFT PARENTHESIS
CHAR(0x29,0x29,0x29,CA_NONE,		_C_PRINT)				//	RIGHT PARENTHESIS
CHAR(0x2A,0x2A,0x2A,CA_NONE,		_C_PRINT)				//	ASTERISK
CHAR(0x2B,0x2B,0x2B,CA_NONE,		_C_PRINT)				//	PLUS SIGN
CHAR(0x2C,0x2C,0x2C,CA_NONE,		_C_PRINT)				//	COMMA
CHAR(0x2D,0x2D,0x2D,CA_NONE,		_C_PRINT)				//	HYPHEN-MINUS
CHAR(0x2E,0x2E,0x2E,CA_NONE,		_C_PRINT)				//	FULL STOP
CHAR(0x2F,0x2F,0x2F,CA_NONE,		_C_PRINT)				//	SOLIDUS
CHAR(0x30,0x30,0x30,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT ZERO
CHAR(0x31,0x31,0x31,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT ONE
CHAR(0x32,0x32,0x32,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT TWO
CHAR(0x33,0x33,0x33,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT THREE
CHAR(0x34,0x34,0x34,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT FOUR
CHAR(0x35,0x35,0x35,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT FIVE
CHAR(0x36,0x36,0x36,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT SIX
CHAR(0x37,0x37,0x37,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT SEVEN
CHAR(0x38,0x38,0x38,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT EIGHT
CHAR(0x39,0x39,0x39,CA_NONE,		_C_DIGIT | _C_XDIGIT | _C_PRINT)	//	DIGIT NINE
CHAR(0x3A,0x3A,0x3A,CA_NONE,		_C_PRINT)				//	COLON
CHAR(0x3B,0x3B,0x3B,CA_NONE,		_C_PRINT)				//	SEMICOLON
CHAR(0x3C,0x3C,0x3C,CA_NONE,		_C_PRINT)				//	LESS-THAN SIGN
CHAR(0x3D,0x3D,0x3D,CA_NONE,		_C_PRINT)				//	EQUALS SIGN
CHAR(0x3E,0x3E,0x3E,CA_NONE,		_C_PRINT)				//	GREATER-THAN SIGN
CHAR(0x3F,0x3F,0x3F,CA_NONE,		_C_PRINT)				//	QUESTION MARK
CHAR(0x40,0x40,0x40,CA_NONE,		_C_PRINT)				//	COMMERCIAL AT
CHAR(0x41,0x41,0x41,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER A
CHAR(0x42,0x42,0x42,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER B
CHAR(0x43,0x43,0x43,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER C
CHAR(0x44,0x44,0x44,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER D
CHAR(0x45,0x45,0x45,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER E
CHAR(0x46,0x46,0x46,CA_NONE,		_C_UPPER | _C_XDIGIT | _C_PRINT)	//	LATIN CAPITAL LETTER F
CHAR(0x47,0x47,0x47,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER G
CHAR(0x48,0x48,0x48,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER H
CHAR(0x49,0x49,0x49,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER I
CHAR(0x4A,0x4A,0x4A,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER J
CHAR(0x4B,0x4B,0x4B,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER K
CHAR(0x4C,0x4C,0x4C,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER L
CHAR(0x4D,0x4D,0x4D,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER M
CHAR(0x4E,0x4E,0x4E,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER N
CHAR(0x4F,0x4F,0x4F,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER O
CHAR(0x50,0x50,0x50,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER P
CHAR(0x51,0x51,0x51,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER Q
CHAR(0x52,0x52,0x52,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER R
CHAR(0x53,0x53,0x53,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER S
CHAR(0x54,0x54,0x54,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER T
CHAR(0x55,0x55,0x55,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER U
CHAR(0x56,0x56,0x56,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER V
CHAR(0x57,0x57,0x57,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER W
CHAR(0x58,0x58,0x58,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER X
CHAR(0x59,0x59,0x59,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER Y
CHAR(0x5A,0x5A,0x5A,CA_NONE,		_C_UPPER | _C_PRINT)			//	LATIN CAPITAL LETTER Z
CHAR(0x5B,0x5B,0x5B,CA_NONE,		_C_PRINT)				//	LEFT SQUARE BRACKET
CHAR(0x5C,0x5C,0x5C,CA_NONE,		_C_PRINT)				//	REVERSE SOLIDUS
CHAR(0x5D,0x5D,0x5D,CA_NONE,		_C_PRINT)				//	RIGHT SQUARE BRACKET
CHAR(0x5E,0x5E,0x5E,CA_NONE,		_C_PRINT)				//	CIRCUMFLEX ACCENT
CHAR(0x5F,0x5F,0x5F,CA_NONE,		_C_INNER | _C_PRINT)			//	LOW LINE
CHAR(0x60,0x60,0x60,CA_NONE,		_C_PRINT)				//	GRAVE ACCENT
CHAR(0x61,0x41,0x41,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER A
CHAR(0x62,0x42,0x42,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER B
CHAR(0x63,0x43,0x43,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER C
CHAR(0x64,0x44,0x44,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER D
CHAR(0x65,0x45,0x45,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER E
CHAR(0x66,0x46,0x46,CA_NONE,		_C_LOWER | _C_XDIGIT | _C_PRINT)	//	LATIN SMALL LETTER F
CHAR(0x67,0x47,0x47,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER G
CHAR(0x68,0x48,0x48,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER H
CHAR(0x69,0x49,0x49,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER I
CHAR(0x6A,0x4A,0x4A,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER J
CHAR(0x6B,0x4B,0x4B,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER K
CHAR(0x6C,0x4C,0x4C,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER L
CHAR(0x6D,0x4D,0x4D,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER M
CHAR(0x6E,0x4E,0x4E,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER N
CHAR(0x6F,0x4F,0x4F,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER O
CHAR(0x70,0x50,0x50,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER P
CHAR(0x71,0x51,0x51,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER Q
CHAR(0x72,0x52,0x52,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER R
CHAR(0x73,0x53,0x53,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER S
CHAR(0x74,0x54,0x54,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER T
CHAR(0x75,0x55,0x55,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER U
CHAR(0x76,0x56,0x56,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER V
CHAR(0x77,0x57,0x57,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER W
CHAR(0x78,0x58,0x58,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER X
CHAR(0x79,0x59,0x59,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER Y
CHAR(0x7A,0x5A,0x5A,CA_NONE,		_C_LOWER | _C_PRINT)			//	LATIN SMALL LETTER Z
CHAR(0x7B,0x7B,0x7B,CA_NONE,		_C_PRINT)				//	LEFT CURLY BRACKET
CHAR(0x7C,0x7C,0x7C,CA_NONE,		_C_PRINT)	       			//	VERTICAL LINE
CHAR(0x7D,0x7D,0x7D,CA_NONE,		_C_PRINT)				//	RIGHT CURLY BRACKET
CHAR(0x7E,0x7E,0x7E,CA_NONE,		_C_PRINT)				//	TILDE
CHAR(0x7F,0x7F,0x7F,CA_NONE,		_C_CTRL)				//	<control>
CHAR(0x80,0x80,0x80,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x81,0x81,0x81,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x82,0x82,0x82,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x83,0x83,0x83,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x84,0x84,0x84,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x85,0x85,0x85,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x86,0x86,0x86,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x87,0x87,0x87,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x88,0x88,0x88,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x89,0x89,0x89,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8A,0x8A,0x8A,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8B,0x8B,0x8B,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8C,0x8C,0x8C,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8D,0x8D,0x8D,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8E,0x8E,0x8E,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x8F,0x8F,0x8F,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x90,0x90,0x90,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x91,0x91,0x91,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x92,0x92,0x92,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x93,0x93,0x93,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x94,0x94,0x94,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x95,0x95,0x95,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x96,0x96,0x96,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x97,0x97,0x97,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x98,0x98,0x98,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x99,0x99,0x99,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9A,0x9A,0x9A,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9B,0x9B,0x9B,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9C,0x9C,0x9C,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9D,0x9D,0x9D,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9E,0x9E,0x9E,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0x9F,0x9F,0x9F,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA0,0xA0,0xA0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA1,0xA1,0xA1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA2,0xA2,0xA2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA3,0xA3,0xA3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA4,0xA4,0xA4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA5,0xA5,0xA5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA6,0xA6,0xA6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA7,0xA7,0xA7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA8,0xA8,0xA8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xA9,0xA9,0xA9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAA,0xAA,0xAA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAB,0xAB,0xAB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAC,0xAC,0xAC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAD,0xAD,0xAD,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAE,0xAE,0xAE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xAF,0xAF,0xAF,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB0,0xB0,0xB0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB1,0xB1,0xB1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB2,0xB2,0xB2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB3,0xB3,0xB3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB4,0xB4,0xB4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB5,0xB5,0xB5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB6,0xB6,0xB6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB7,0xB7,0xB7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB8,0xB8,0xB8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xB9,0xB9,0xB9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBA,0xBA,0xBA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBB,0xBB,0xBB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBC,0xBC,0xBC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBD,0xBD,0xBD,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBE,0xBE,0xBE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xBF,0xBF,0xBF,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC0,0xC0,0xC0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC1,0xC1,0xC1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC2,0xC2,0xC2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC3,0xC3,0xC3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC4,0xC4,0xC4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC5,0xC5,0xC5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC6,0xC6,0xC6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC7,0xC7,0xC7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC8,0xC8,0xC8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xC9,0xC9,0xC9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCA,0xCA,0xCA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCB,0xCB,0xCB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCC,0xCC,0xCC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCD,0xCD,0xCD,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCE,0xCE,0xCE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xCF,0xCF,0xCF,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD0,0xD0,0xD0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD1,0xD1,0xD1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD2,0xD2,0xD2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD3,0xD3,0xD3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD4,0xD4,0xD4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD5,0xD5,0xD5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD6,0xD6,0xD6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD7,0xD7,0xD7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD8,0xD8,0xD8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xD9,0xD9,0xD9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDA,0xDA,0xDA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDB,0xDB,0xDB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDC,0xDC,0xDC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDD,0xDD,0xDD,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDE,0xDE,0xDE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xDF,0xDF,0xDF,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE0,0xE0,0xE0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE1,0xE1,0xE1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE2,0xE2,0xE2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE3,0xE3,0xE3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE4,0xE4,0xE4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE5,0xE5,0xE5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE6,0xE6,0xE6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE7,0xE7,0xE7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE8,0xE8,0xE8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xE9,0xE9,0xE9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xEA,0xEA,0xEA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xEB,0xEB,0xEB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xEC,0xEC,0xEC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xED,0xED,0xED,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xEE,0xEE,0xEE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xEF,0xEF,0xEF,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF0,0xF0,0xF0,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF1,0xF1,0xF1,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF2,0xF2,0xF2,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF3,0xF3,0xF3,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF4,0xF4,0xF4,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF5,0xF5,0xF5,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF6,0xF6,0xF6,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF7,0xF7,0xF7,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF8,0xF8,0xF8,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xF9,0xF9,0xF9,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFA,0xFA,0xFA,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFB,0xFB,0xFB,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFC,0xFC,0xFC,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFD,0xFD,0xFD,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFE,0xFE,0xFE,CA_NONE,		_C_PRINT)				//	UTF-8
CHAR(0xFF,0xFF,0xFF,CA_NONE,		_C_PRINT)				//	UTF-8
