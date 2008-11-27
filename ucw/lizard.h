/*
 *	LiZaRd -- Fast compression method based on Lempel-Ziv 77
 *
 *	(c) 2004, Robert Spalek <robert@ucw.cz>
 *
 *	This software may be freely distributed and used according to the terms
 *	of the GNU Lesser General Public License.
 */

#ifndef _UCW_LIZARD_H
#define _UCW_LIZARD_H

/***
 * [[basic]]
 * Basic application
 * -----------------
 **/

/**
 * The compression routine needs input buffer 8 characters longer, because it
 * does not check the input bounds all the time.
 **/
#define	LIZARD_NEEDS_CHARS	8

#define	LIZARD_MAX_MULTIPLY	23./22
#define	LIZARD_MAX_ADD		4
  /* In the worst case, the compressed file will not be longer than its
   * original length * 23/22 + 4.
   *
   * The additive constant is for EOF and the header of the file.
   *
   * The multiplicative constant comes from 19-byte incompressible string
   * followed by a 3-sequence that can be compressed into 2-byte link.  This
   * breaks the copy-mode and it needs to be restarted with a new header.  The
   * total length is 2(header) + 19(string) + 2(link) = 23.
   */

/**
 * The compressed data will not be longer than `LIZARD_MAX_LEN(input_length)`.
 * Note that `LIZARD_MAX_LEN(length) > length` (this is not a problem of the algorithm,
 * every lossless compression algorithm must have an input for which it produces a larger
 * output).
 *
 * Use this to compute the size of @out paramater of @lizard_compress().
 **/
#define LIZARD_MAX_LEN(LENGTH) ((LENGTH) * LIZARD_MAX_MULTIPLY + LIZARD_MAX_ADD)

/* lizard.c */

/**
 * Compress data provided in @in.
 * The input buffer must be at last `@in_len + <<def_LIZARD_NEEDS_CHARS,LIZARD_NEEDS_CHARS>>`
 * long (the compression algorithm does not check the bounds all the time).
 *
 * The output will be stored in @out. The @out buffer must be at last <<def_LIZARD_LEN,`LIZARD_LEN(@in_len)`>>
 * bytes long for the output to fit in for sure.
 *
 * The function returns number of bytes actually needed (the size of output).
 *
 * Use @lizard_decompress() to get the original data.
 **/
int lizard_compress(const byte *in, uns in_len, byte *out);

/**
 * Decompress data previously compressed by @lizard_compress().
 * Input is taken from @in and the result stored in @out.
 * The size of output is returned.
 *
 * Note that you need to know the maximal possible size of the output to
 * allocate enough memory.
 *
 * See also <<safe,safe decompression>>.
 **/
int lizard_decompress(const byte *in, byte *out);

/* lizard-safe.c */

/***
 * [[safe]]
 * Safe decompression
 * ------------------
 *
 * You can use safe decompression, when you want to make sure you got the
 * length right and when you want to reuse the buffer for output.
 ***/

struct lizard_buffer;	/** Type of the output buffer for @lizard_decompress_safe(). **/

struct lizard_buffer *lizard_alloc(void);	/** Get me a new <<struct_lizard_buffer,`lizard_buffer`>>. **/
void lizard_free(struct lizard_buffer *buf);	/** Return memory used by a <<struct_lizard_buffer,`lizard_buffer`>>. **/

/**
 * Decompress data previously compressed by @lizard_compress().
 * Input is taken from @in. @buf is used to store the output.
 * You need to provide the length of the uncompressed data in @expected_length.
 *
 * The pointer to data is returned.
 *
 * If an error occurs, NULL is returned and `errno` is set.
 * `EINVAL` means the actual length does not match @expected_length.
 * `EFAULT` means a segfault was encountered while decompressing (probably @expected_length was way too low).
 **/
byte *lizard_decompress_safe(const byte *in, struct lizard_buffer *buf, uns expected_length);

/* adler32.c */

/***
 * [[adler]]
 * Adler-32 checksum
 * -----------------
 *
 * This is here because it is commonly used to check data compressed by LiZaRd.
 * However, it could also belong to <<hash,hashing routines>>.
 ***/

/**
 * Update the Adler-32 checksum with more data.
 * @adler is the old value, @byte points to @len bytes of data to update with.
 * Result is returned.
 **/
uns adler32_update(uns adler, const byte *ptr, uns len);

/**
 * Compute the Adler-32 checksum of a block of data.
 **/
static inline uns adler32(const byte *buf, uns len)
{
  return adler32_update(1, buf, len);
}

#endif
