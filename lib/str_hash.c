/*
 *	Hyper-super-meta-alt-control-shift extra fast str_len() and str_hash()
 *	routines
 *
 *	It is always at least as fast as the classical strlen() routine and for
 *	strings longer than 100 characters, it is substantially faster.
 *
 *	(c) 2002, Robert Spalek <robert@ucw.cz>
 */

#include "lib/lib.h"
#include "lib/str_hash.h"

/* The number of bits the hash in the function str_hash() is rotated by after
 * every pass.  It should be prime with the word size.  */
#define	SHIFT_BITS	5

/* A bit-mask which clears higher bytes than a given threshold.  */
static uns mask_higher_bits[sizeof(uns)];

static void CONSTRUCTOR
str_hash_init(void)
{
	uns i, j;
	char *str;
	for (i=0; i<sizeof(uns); i++)
	{
		str = (char *) (mask_higher_bits + i);
		for (j=0; j<i; j++)
			str[j] = -1;
		for (j=i; j<sizeof(uns); j++)
			str[j] = 0;
	}
}

static inline uns str_len_uns(uns x) CONST;

static inline uns
str_len_uns(uns x)
{
	const uns sub = ((uns) -1) / 0xff;
	const uns and = sub * 0x80;
	uns a, i;
	char *bytes;
	a = (x ^ (x - sub)) & and;
	/* 
	 * x_2 = x - 0x01010101;
	 * x_3 = x ^ x_2;
	 * a = x_3 & 0x80808080;
	 *
	 * If none byte of x is in {0, 0x80}, then the highest bit of each byte
	 * of x_2 is the same as of x.  Hence x_3 has all these highest bits
	 * cleared.  If a == 0, then we are sure there is no zero byte in x.
	 */
	if (!a)
		return sizeof(uns);
	bytes = (char *) &x;
	for (i=0; i<sizeof(uns) && bytes[i]; i++);
	return i;
}

inline uns
str_len_aligned(const char *str)
{
	const uns *u = (const uns *) str;
	uns len = 0;
	while (1)
	{
		uns l = str_len_uns(*u++);
		len += l;
		if (l < sizeof(uns))
			return len;
	}
}

inline uns
str_hash_aligned(const char *str)
{
	const uns *u = (const uns *) str;
	uns hash = 0;
	while (1)
	{
		uns last_len = str_len_uns(*u);
		hash = ROL(hash, SHIFT_BITS);
		if (last_len < sizeof(uns))
		{
			uns tmp = *u & mask_higher_bits[last_len];
			hash ^= tmp;
			return hash;
		}
		hash ^= *u++;
	}
}

#ifndef	CPU_ALLOW_UNALIGNED
uns
str_len(const char *str)
{
	uns shift = UNALIGNED_PART(str, uns);
	if (!shift)
		return str_len_aligned(str);
	else
	{
		uns i;
		shift = sizeof(uns) - shift;
		for (i=0; i<shift; i++)
			if (!str[i])
				return i;
		return shift + str_len_aligned(str + shift);
	}
}

uns
str_hash(const char *str)
{
	uns shift = UNALIGNED_PART(str, uns);
	if (!shift)
		return str_hash_aligned(str);
	else
	{
		uns hash = 0;
		uns i;
		for (i=0; ; i++)
		{
			uns modulo = i % sizeof(uns);
			uns shift;
#ifdef	CPU_LITTLE_ENDIAN
			shift = modulo;
#else
			shift = sizeof(uns) - 1 - modulo;
#endif
			if (!modulo)
				hash = ROL(hash, SHIFT_BITS);
			if (!str[i])
				break;
			hash ^= ((unsigned char) str[i]) << (shift * 8);
		}
		return hash;
	}
}
#endif
