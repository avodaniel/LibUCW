/*
 *	Image Library -- Comparitions of image signatures
 *
 *	(c) 2006 Pavel Charvat <pchar@ucw.cz>
 *
 *	This software may be freely distributed and used according to the terms
 *	of the GNU Lesser General Public License.
 */

#undef LOCAL_DEBUG

#include "lib/lib.h"
#include "lib/math.h"
#include "lib/fastbuf.h"
#include "images/math.h"
#include "images/images.h"
#include "images/signature.h"

#include <stdio.h>

static uns
image_signatures_dist_1(struct image_signature *sig1, struct image_signature *sig2)
{
  DBG("image_signatures_dist_1()");

  uns cnt1 = sig1->len;
  uns cnt2 = sig2->len;
  struct image_region *reg1 = sig1->reg;
  struct image_region *reg2 = sig2->reg;
  uns mf[IMAGE_REG_MAX][IMAGE_REG_MAX], mh[IMAGE_REG_MAX][IMAGE_REG_MAX];
  uns lf[IMAGE_REG_MAX * 2], lh[IMAGE_REG_MAX * 2];
  uns df = sig1->df + sig2->df, dh = sig1->dh + sig2->dh;

  /* Compute distance matrix */
  for (uns i = 0; i < cnt1; i++)
    for (uns j = 0; j < cnt2; j++)
      {
	uns d = 0;
	for (uns k = 0; k < IMAGE_REG_F; k++)
	  {
	    int dif = reg1[i].f[k] - reg2[j].f[k];
	    d += dif * dif;
	  }
	mf[i][j] = d;
	d = 0;
	for (uns k = 0; k < IMAGE_REG_H; k++)
	  {
	    int dif = reg1[i].h[k] - reg2[j].h[k];
	    d += dif * dif;
	  }
	mh[i][j] = d;
      }

  uns lfs = 0, lhs = 0;
  for (uns i = 0; i < cnt1; i++)
    {
      uns f = mf[i][0], h = mh[i][0];
      for (uns j = 1; j < cnt2; j++)
        {
	  f = MIN(f, mf[i][j]);
	  h = MIN(h, mh[i][j]);
	}
      lf[i] = (df * 0x10000) / (df + fast_sqrt_u32(f));
      lh[i] = (dh * 0x10000) / (dh + fast_sqrt_u32(h));
      lfs += lf[i] * (6 * reg1[i].wa + 2 * reg1[i].wb);
      lhs += lh[i] * reg1[i].wa;
    }
  for (uns i = 0; i < cnt2; i++)
    {
      uns f = mf[0][i], h = mh[0][i];
      for (uns j = 1; j < cnt1; j++)
        {
	  f = MIN(f, mf[j][i]);
	  h = MIN(h, mh[j][i]);
	}
      lf[i + cnt1] = (df * 0x10000) / (df + fast_sqrt_u32(f));
      lh[i + cnt1] = (dh * 0x10000) / (dh + fast_sqrt_u32(h));
      lfs += lf[i] * (6 * reg2[i].wa + 2 * reg2[i].wb);
      lhs += lh[i] * reg2[i].wa;
    }

  uns measure = lfs * 6 + lhs * 2 * 8;

#ifdef LOCAL_DEBUG
  /* Display similarity vectors */
  byte buf[2 * IMAGE_REG_MAX * 16 + 3], *b = buf;
  for (uns i = 0; i < cnt1 + cnt2; i++)
    {
      if (i)
	*b++ = ' ';
      if (i == cnt1)
	*b++ = '~', *b++ = ' ';
      b += sprintf(b, "%.4f", (double)lf[i] / 0x10000);
    }
  *b = 0;
  DBG("Lf=(%s)", buf);
  b = buf;
  for (uns i = 0; i < cnt1 + cnt2; i++)
    {
      if (i)
	*b++ = ' ';
      if (i == cnt1)
	*b++ = '~', *b++ = ' ';
      b += sprintf(b, "%.4f", (double)lh[i] / 0x10000);
    }
  *b = 0;
  DBG("Lh=(%s)", buf);
  DBG("Lfm=%.4f", lfs / (double)(1 << (3 + 8 + 16)));
  DBG("Lhm=%.4f", lhs / (double)(1 << (8 + 16)));
  DBG("measure=%.4f", measure / (double)(1 << (3 + 3 + 8 + 16)));
#endif

  return (1 << (3 + 3 + 8 + 16)) - measure;
}

#define ASORT_PREFIX(x) image_signatures_dist_2_##x
#define ASORT_KEY_TYPE uns
#define ASORT_ELT(i) items[i]
#define ASORT_EXTRA_ARGS , uns *items
#include "lib/arraysort.h"

#define SIG_EXPLAIN
#include "images/sig-cmp-gen.h"
#include "images/sig-cmp-gen.h"

uns
image_signatures_dist(struct image_signature *sig1, struct image_signature *sig2)
{
  switch (image_sig_compare_method)
    {
      case 1:
	return image_signatures_dist_1(sig1, sig2);
      case 2:
	return image_signatures_dist_2(sig1, sig2);
      default:
	die("Invalid image signatures compare method.");
    }
}

uns
image_signatures_dist_explain(struct image_signature *sig1, struct image_signature *sig2, struct fastbuf *fb)
{
  if (image_sig_compare_method == 2)
    return image_signatures_dist_2_explain(sig1, sig2, fb);
  return image_signatures_dist(sig1, sig2);
}
