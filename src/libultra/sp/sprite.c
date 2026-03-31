/*
 * Copyright 1995, Silicon Graphics, Inc.
 * ALL RIGHTS RESERVED
 * UNPUBLISHED -- Rights reserved under the copyright laws of the United
 * States.   Use of a copyright notice is precautionary only and does not
 * imply publication or disclosure.
 * U.S. GOVERNMENT RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to restrictions
 * as set forth in FAR 52.227.19(c)(2) or subparagraph (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS 252.227-7013 and/or
 * in similar or successor clauses in the FAR, or the DOD or NASA FAR
 * Supplement.  Contractor/manufacturer is Silicon Graphics, Inc.,
 * 2011 N. Shoreline Blvd. Mountain View, CA 94039-7311.
 *
 * THE CONTENT OF THIS WORK CONTAINS CONFIDENTIAL AND PROPRIETARY
 * INFORMATION OF SILICON GRAPHICS, INC. ANY DUPLICATION, MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IN ANY FORM, IN WHOLE, OR IN PART, IS STRICTLY
 * PROHIBITED WITHOUT THE PRIOR EXPRESS WRITTEN PERMISSION OF SILICON
 * GRAPHICS, INC.
 */
#include <assert.h>
#include <PR/sp.h>
#include <PR/os.h>

/*
 * spSetZ()
 *
 */
void
spSetZ (Sprite *sp, s32 z)
{

#ifdef DEBUG
	emPrintf("spSetZ (Sprite 0x%08x, (%d))\n", sp, z );
#endif

	sp->zdepth = (s16)z;
}

/*
 * spMove()
 *
 *   Moves a sprite on the screen.
 */
void
spMove (Sprite *sp, s32 x, s32 y)
{

#ifdef DEBUG
	emPrintf("spMove (Sprite 0x%08x, (%d,%d))\n", sp, x, y );
#endif

	sp->x = (s16)x;
	sp->y = (s16)y;
}

static s32 scissor_xmax;
static s32 scissor_ymax;

static s32 scissor_xmin;
static s32 scissor_ymin;

/*
 * spScissor()
 *
 *   Sets the scissoring box to be used for subsequent Sprite Drawing
 */
void
spScissor (s32 xmin, s32 xmax, s32 ymin, s32 ymax )
{
	scissor_xmin = xmin;
	scissor_ymin = ymin;

	scissor_xmax = xmax;
	scissor_ymax = ymax;
}

static int* prev_bmbuf = NULL;

static void
drawbitmap(Gfx **dl, Sprite *sp, Bitmap *bm,
	   s32 tx, s32 ty, s32 tx2, s32 ty2,
	   s32 fs, s32 ft, s32 isx, s32 isy)
{
	Gfx	*gp;
	s32	bmW;
	s32	bmHreal;
	s32	sx1, sy1, sx2, sy2;
	s32	sfs, sft;
	s32	dxt;
	s32	line;
	s32	words, lrs;
	s32	nrows, nbuf;
	s32	j;
	int	*currbuf;

	bmW    = bm->width;
	bmHreal = sp->bmHreal;

	if (tx >= scissor_xmax)
		return;

	gp = *dl;

	if (ty >= scissor_ymax)
		return;
	if (tx2 < scissor_xmin)
		return;
	if (ty2 < scissor_ymin)
		return;

	/* Clip to left edge */
	if (tx < scissor_xmin) {
		sx1 = scissor_xmin << 2;
		sfs = bm->s * 32 + fs + (scissor_xmin - tx) * isx;
	} else {
		sx1 = tx << 2;
		sfs = bm->s * 32 + fs;
	}

	/* Clip to top edge */
	if (ty < scissor_ymin) {
		sy1 = scissor_ymin << 2;
		sft = bm->t * 32 + ft + (scissor_ymin - ty) * isy;
	} else {
		sy1 = ty << 2;
		sft = bm->t * 32 + ft;
	}

	/* Clip to right edge */
	if (tx2 < scissor_xmax) {
		sx2 = tx2 << 2;
	} else {
		sx2 = scissor_xmax << 2;
	}

	/* Clip to bottom edge */
	if (ty2 < scissor_ymax) {
		sy2 = ty2 << 2;
	} else {
		sy2 = scissor_ymax << 2;
	}

	currbuf = (int *)bm->buf;

	if (prev_bmbuf != currbuf) {
	    switch (sp->bmsiz) {
	    case G_IM_SIZ_4b:
		if (sp->attr & SP_TEXSHUF) {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = (bmW * bmHreal + 3) / 4 - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0,
			lrs, (1<<11) / ((bmW/2 + 7)/8));
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_4b,
			((bmW/2)+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		} else {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = (bmW * bmHreal + 3) / 4 - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    line = bmW / 16;
		    if (line <= 0) line = 1;
		    words = line;
		    if (line <= 0) words = 1;
		    dxt = (words + 0x7FF) / words;
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0, lrs,
			dxt);
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_4b,
			((bmW/2)+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		}
		break;

	    case G_IM_SIZ_8b:
		if (sp->attr & SP_TEXSHUF) {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = (bmW * bmHreal + 1) / 2 - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0,
			lrs, (1<<11) / ((bmW + 7)/8));
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_8b,
			(bmW+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		} else {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = (bmW * bmHreal + 1) / 2 - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    line = bmW / 8;
		    if (line <= 0) line = 1;
		    words = line;
		    if (line <= 0) words = 1;
		    dxt = (words + 0x7FF) / words;
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0, lrs,
			dxt);
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_8b,
			(bmW+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		}
		break;

	    case G_IM_SIZ_16b:
		if (sp->bmsiz == 1) {
		    /* never reached, but compiler generates it */
		}
		if (sp->attr & SP_TEXSHUF) {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = bmW * bmHreal - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0,
			lrs, (1<<11) / ((bmW + 7)/8));
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			(bmW+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		} else if (bm->LUToffset != 0) {
		    /* CI with LUT offset - split tile loading */
		    gDPSetTextureImage(gp++, G_IM_FMT_CI, G_IM_SIZ_8b,
			1, bm->buf);
		    gDPSetTile(gp++, G_IM_FMT_CI, G_IM_SIZ_8b, 0, 0x100,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    words = bmW * bmHreal;
		    lrs = words - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    nbuf = bmW;
		    nrows = bmW * 4 - bmW;
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0, lrs,
			CALC_DXT(bmW, G_IM_SIZ_8b_BYTES));
		    gDPLoadSync(gp++);
		    {
			s32 half;
			int *bufptr;
			s32 tmem;
			s32 nlines;

			half = bmHreal / 2;
			bufptr = bm->buf;
			nlines = (half - 2) * bmW;
			tmem = bufptr + (s32)((words/2) * bm->LUToffset);
			nbuf = bmW << 1;
			if (nlines < 0) {
			    tmem = (int *)((s32)bufptr + (-nlines) * 8);
			    nbuf -= (-nlines) * 8;
			    nlines = 0;
			}

			if (half >= 0) {
			    line = bmW / 8;
			    for (j = 0; j <= half; j++) {
				/* ... split tile loop ... */
			    }
			}
		    }
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			(bmW+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		} else {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = bmW * bmHreal - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    line = (bmW * 2) / 8;
		    if (line <= 0) line = 1;
		    words = line;
		    if (line <= 0) words = 1;
		    dxt = (words + 0x7FF) / words;
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0, lrs,
			dxt);
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_16b,
			(bmW+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		}
		break;

	    case G_IM_SIZ_32b:
		if (sp->attr & SP_TEXSHUF) {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_32b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_32b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = bmW * bmHreal - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0,
			lrs, (1<<11) / (((bmW*2) + 7)/8));
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_32b,
			((bmW*2)+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		} else {
		    gDPSetTextureImage(gp++, sp->bmfmt & 7, G_IM_SIZ_32b,
			1, bm->buf);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_32b, 0, 0,
			G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPLoadSync(gp++);
		    lrs = bmW * bmHreal - 1;
		    if (lrs < 0x7FF) {} else { lrs = 0x7FF; }
		    line = (bmW * 4) / 8;
		    if (line <= 0) line = 1;
		    words = line;
		    if (line <= 0) words = 1;
		    dxt = (words + 0x7FF) / words;
		    gDPLoadBlock(gp++, G_TX_LOADTILE, 0, 0, lrs,
			dxt);
		    gDPPipeSync(gp++);
		    gDPSetTile(gp++, sp->bmfmt & 7, G_IM_SIZ_32b,
			((bmW*2)+7)/8, 0,
			G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
		    gDPSetTileSize(gp++, G_TX_RENDERTILE, 0, 0,
			(bmW-1) << 2, (bmHreal-1) << 2);
		}
		break;
	    }

	    prev_bmbuf = (int *)bm->buf;
	}

	if (sp->attr & SP_FASTCOPY) {
	    if (sp->bmfmt == 1) {
		isx = isx << 2;
	    }
	    gSPScisTextureRectangle(gp++, sx1, sy1, sx2, sy2,
		G_TX_RENDERTILE, sfs, sft, isx, isy);
	} else {
	    gSPScisTextureRectangle(gp++, sx1, sy1, sx2, sy2,
		G_TX_RENDERTILE, sfs, sft, isx, isy);
	}
	gDPPipeSync(gp++);

	*dl = gp;
}

static u16 sp_attr = 0;

void
spInit( Gfx **glistp )
{
	Gfx		*gl;

	gl = *glistp;

#ifdef DEBUG
	emPrintf("spInit ()\n" );
#endif
	sp_attr = 0;

	scissor_xmin = 0;
	scissor_ymin = 0;

	scissor_xmax = 320;
	scissor_ymax = 240;

	/* Turn on texturing */
	gDPPipeSync         ( gl++ );
	gDPSetCycleType     ( gl++, G_CYC_1CYCLE);
	gSPTexture          ( gl++, 0x8000, 0x8000, 0,  G_TX_RENDERTILE, G_ON);
	gDPSetAlphaCompare  ( gl++, G_AC_NONE   );
	gDPSetTexturePersp  ( gl++, G_TP_NONE   );
	gDPSetTextureFilter ( gl++, G_TF_BILERP );
	gDPSetTextureConvert( gl++, G_TC_FILT   );
	gDPSetTextureDetail ( gl++, G_TD_CLAMP  );
	gDPSetTextureLOD    ( gl++, G_TL_TILE   );
	gDPSetTextureLUT    ( gl++, G_TT_NONE   );

#define SPRITE_SURF	G_RM_TEX_EDGE
#define SPRITE_SURF2	G_RM_TEX_EDGE2

	gDPSetRenderMode( gl++, SPRITE_SURF, SPRITE_SURF2);

	*glistp = gl;
}


/*
 * spDraw()
 *
 *   Draws all of the sprites that are associated with bitmaps and that
 *   are supposed to be drawn (spDraw()).  They are drawn from 0 to maxsp,
 *   so sprites with higher numbers will overwrite lower-numbered sprites.
 *
 */
Gfx *
spDraw ( Sprite   *s )
{
	int		i;
	s32		x, y;
	float	sx, sy;
	Bitmap 	*b;
	Gfx		*gl;
#ifndef NDEBUG
	Gfx		*ogl;
#endif
	Gfx		*dl_start;
	s32		isx, isy;
	s32		tx, ty;
	s32		tx2, ty2;
	s32		x2, y2;
	float	ftx, fty;
	s32		fs, ft;
	s32		ex, ey;

#ifdef rmDEBUG
	rmonPrintf("spDraw (Sprite 0x%08x )\n", s );
#endif

	if (s->attr & SP_HIDDEN)
	return(NULL);

	prev_bmbuf = NULL;

	gl = s->rsp_dl_next;
	if( gl == NULL )
	gl = s->rsp_dl;
	dl_start = gl;

#ifndef NDEBUG
	ogl = gl;
#endif

	b  = s->bitmap;
	ex = 0;
	ey = 0;

	if (sp_attr & SP_EXTERN)	/* previous attr was extern? */
	sp_attr = ~s->attr;	/* Assume previous modes are all different
				   from new ones */

	if (s->attr & SP_EXTERN)	/* current attr is extern? */
	sp_attr = s->attr;	/* Assume all settings should remain the same */

	if (s->attr != sp_attr) {
	if ((s->attr & SP_TRANSPARENT) && !(sp_attr & SP_TRANSPARENT)) {
		gDPSetRenderMode( gl++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
	} else if (!(s->attr & SP_TRANSPARENT) &&
		   (sp_attr & SP_TRANSPARENT)) {
		gDPSetRenderMode( gl++,
				 SPRITE_SURF, SPRITE_SURF2);
	}

	if ((s->attr & SP_CUTOUT) && !(sp_attr & SP_CUTOUT)) {
		gDPSetBlendColor ( gl++, 0xff, 0xff, 0xff, 0x01);
		gDPSetAlphaCompare ( gl++, G_AC_THRESHOLD) ;
	} else if (!(s->attr & SP_CUTOUT) && (sp_attr & SP_CUTOUT)) {
		gDPSetAlphaCompare ( gl++, G_AC_NONE) ;
	}

	if( (s->attr & SP_TEXSHIFT) && !(sp_attr & SP_TEXSHIFT) ) {
		gDPSetTextureFilter( gl++, G_TF_AVERAGE );
	} else if( !(s->attr & SP_TEXSHIFT) && (sp_attr & SP_TEXSHIFT) ) {
		gDPSetTextureFilter( gl++, G_TF_BILERP );
	};

	};

	sp_attr = s->attr;

	if( sp_attr & SP_Z ) {
	gDPSetPrimDepth(gl++, s->zdepth, 0);
	};


	gDPSetPrimColor( gl++, 0, 0, s->red, s->green, s->blue, s->alpha);

	if (s->bmfmt == G_IM_FMT_IA || s->bmfmt == G_IM_FMT_I) {
	if( s->alpha == 255 ) {
		gDPSetCombineMode ( gl++,
				   G_CC_MODULATEIDECALA_PRIM,
				   G_CC_MODULATEIDECALA_PRIM);
	} else {
		gDPSetCombineMode ( gl++,
				   G_CC_MODULATEIA_PRIM,
				   G_CC_MODULATEIA_PRIM);
	};
	} else {
	if( s->alpha == 255 ) {
		gDPSetCombineMode ( gl++,
				   G_CC_MODULATEIDECALA_PRIM,
				   G_CC_MODULATEIDECALA_PRIM);
	} else {
		gDPSetCombineMode ( gl++,
				   G_CC_MODULATERGBA_PRIM,
				   G_CC_MODULATERGBA_PRIM);
	};
	}


	if( s->bmfmt == G_IM_FMT_CI ) {
	gDPSetTextureLUT( gl++, G_TT_RGBA16);
	gDPLoadTLUT( gl++, s->nTLUT, 256+s->startTLUT, s->LUT );
	gDPLoadSync( gl++ );
	};

#define MY_K0   (175 & 0x1ff)
#define MY_K1   (-43 & 0x1ff)
#define MY_K2   (-89 & 0x1ff)
#define MY_K3   (222 & 0x1ff)
#define MY_K4   (114 & 0x1ff)
#define MY_K5   (42 & 0x1ff)

	if( (s->bmfmt == G_IM_FMT_YUV) && (s->attr & SP_FASTCOPY) ) {
	gDPSetTextureConvert( gl++, G_TC_CONV);
	gDPSetTextureFilter( gl++, G_TF_POINT);
	gDPSetCombineMode( gl++, G_CC_1CYUV2RGB, G_CC_1CYUV2RGB);
	gDPSetConvert( gl++, MY_K0, MY_K1, MY_K2, MY_K3, MY_K4, MY_K5);
	} else if(s->bmfmt == G_IM_FMT_YUV) {
	gDPSetCycleType( gl++, G_CYC_2CYCLE );
	gDPSetTextureFilter( gl++, G_TF_BILERP);
	gDPSetTextureConvert( gl++, G_TC_FILTCONV);
	gDPSetConvert( gl++, MY_K0, MY_K1, MY_K2, MY_K3, MY_K4, MY_K5);
	gDPSetCombineMode( gl++, G_CC_YUV2RGB, G_CC_PASS2);
	}

	if (s->attr & SP_SCALE) {
	sx = s->scalex;
	sy = s->scaley;
	} else {
	sx = 1.0F;
	sy = 1.0F;
	}

	isx = (int) ((1<<10) / sx + 0.5F);
	isy = (int) ((1<<10) / sy + 0.5F);

	if( b ) {

	if( (s->attr & SP_FASTCOPY) && (s->bmfmt != G_IM_FMT_YUV) )
		gDPSetCycleType( gl++, G_CYC_COPY);

	x = 0.0F;
	y = 0.0F;

	fty = s->y+y*sy;
	ty = (int) ( fty  + 0.99999F);
	ft = (int) (isy * (ty - fty));
	ft = (ft + 16)>>5;
	if( s->attr & SP_TEXSHIFT )
		ft += 16;			/* 1/2 Texel for AntiAliasing */

	if( s->attr & SP_FRACPOS )
		ft += s->frac_t;		/* Micro-positioning */

	y2 = y + s->bmheight;
	ty2 = (int) (s->y+y2*sy + 0.99999F);

	if( (s->attr & SP_FASTCOPY) && (s->bmfmt != G_IM_FMT_YUV) )
		ty2--;


#ifdef rmDEBUG
	rmonPrintf("\tiscale=(%d,%d), %d bitmaps, sprite_size=(%d,%d)\n",
		isx, isy, s->nbitmaps, s->width, s->height );
#endif

	for( i=0; (i < s->nbitmaps) && (b->width > 0); i++, b++ ) {

		if( (x+b->width) > s->width ) { /* Next bitmap hits edge? */
		int bh;

		x = 0;
		fs = 0;
		ex = 0;
		ey += s->expy;
		y += s->bmheight;	     /* Wrap to next line */
		y2 = y + s->bmheight;	     /* Wrap to next line */

			fty = s->y+y*sy;
		ty = (int) ( fty  + 0.9999F);
		ft = (int) (isy * (ty - fty));
		ft = (ft + 16)>>5;
		if( s->attr & SP_TEXSHIFT )
			ft += 16;			/* 1/2 Texel for AntiAliasing */

		if( s->attr & SP_FRACPOS )
			ft += s->frac_t;		/* Micro-positioning */

		ty2 = (int) (s->y+y2*sy + 0.9999F);

		ty  += ey;
		ty2 += ey;

		if( (s->attr & SP_FASTCOPY) && (s->bmfmt != G_IM_FMT_YUV) )
			ty2--;

		/* Fill out to rect. bdy? */

		if( (b->actualHeight != 0) )
			bh = b->actualHeight;
		else
			bh = s->bmheight;

		if( (y + bh) > s->height ) /* Can't wrap any more? */
			break;
		};

#ifdef rmDEBUG
	rmonPrintf("bm# %d, x,y=(%d,%d) width=%d \n", i, x, y, b->width );
#endif

		ftx = s->x+x*sx;
		tx = (s32) (ftx + 0.9999F);
		fs = (s32) (isx * (tx - ftx));
		fs = (fs + 16)>>5;
		if( s->attr & SP_TEXSHIFT )
		fs += 16;			/* 1/2 Texel for AntiAliasing */

		if( s->attr & SP_FRACPOS )
		fs += s->frac_s;		/* Micro-positioning */

		x2 = x + b->width;
		tx2 = (int) (s->x+x2*sx + 0.9999F);

		if( (b->actualHeight != 0) ) {
		y2 = y + b->actualHeight;
		ty2 = (s32) (s->y+y2*sy + 0.9999F);
		ty2 += ey;

		if( (s->attr & SP_FASTCOPY) && (s->bmfmt != G_IM_FMT_YUV) )
			ty2--;
		};

#ifdef rmDEBUG
		rmonPrintf("\tfull(%g,%g) = int(%d,%d) + frac(%d,%d)\n",
			ftx, fty, tx,ty, fs,ft );
#endif

		tx  += ex;
		tx2 += ex;

		if( (s->attr & SP_FASTCOPY) && (s->bmfmt != G_IM_FMT_YUV) )
		tx2--;

		if( b->buf != NULL ) 	/* Skip over null bitmaps (blanks) */
		drawbitmap ( &gl, s, b, tx, ty, tx2, ty2, fs, ft, isx, isy);

		x += b->width;
		ex += s->expx;
	}

	if (s->attr & SP_FASTCOPY)
		gDPSetCycleType( gl++, G_CYC_1CYCLE);

	if(s->bmfmt == G_IM_FMT_YUV) {
		gDPSetCycleType( gl++, G_CYC_1CYCLE);
		gDPSetTextureFilter ( gl++, G_TF_BILERP );
		gDPSetTextureConvert( gl++, G_TC_FILT   );
	};

	} else {
	int rgba;

	x = (s32)s->x;
	y = (s32)s->y;
	x2 = s->x + (s->width*sx)-1;
	y2 = s->y + (s->height*sy)-1;

	if( ( x >= scissor_xmax) || (y >= scissor_ymax) ) {
#ifdef DEBUG_SCISSOR
		emPrintf("Sprite Scissoring: FILL Upper Left corner (%d,%d) beyond range (%d,%d)\n",
			x, y, scissor_xmax, scissor_ymax );
#endif
	} else if( ( x2 < scissor_xmin) || (y2 < scissor_ymin) ) {
#ifdef DEBUG_SCISSOR
	emPrintf("Sprite Scissoring: FILL Lower Right corner (%d,%d) below range (%d,%d)\n",
		x2, y2, scissor_xmin, scissor_ymin );
#endif
	} else {

		if( x < scissor_xmin )
		x = scissor_xmin;

		if( x2 >= scissor_xmax )
		x2 = scissor_xmax - 1;

		if( y < scissor_ymin )
		y = scissor_ymin;

		if( y2 >= scissor_ymax )
		y2 = scissor_ymax - 1;

		rgba = GPACK_RGBA5551((s->red), (s->green), (s->blue), (s->alpha>>7));

		gSPTexture ( gl++, 0x8000, 0x8000, 0, G_TX_RENDERTILE, G_OFF);
		gDPSetCycleType( gl++, G_CYC_FILL);
		gDPSetFillColor( gl++, (rgba << 16) | (rgba) );

		gDPFillRectangle(  gl++, x,y, x2,y2 );
		gDPSetCycleType( gl++, G_CYC_1CYCLE);
		gSPTexture ( gl++, 0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON);
	}
	}

	if( s->bmfmt == G_IM_FMT_CI ) {
	gDPSetTextureLUT( gl++, G_TT_NONE);
	};

	gSPEndDisplayList ( gl++ );

#if BUILD_VERSION >= VERSION_J
#line 722
#else
#line 714
#endif
	assert((gl - ogl) < s->ndisplist);
	s->rsp_dl_next   = gl;
	return(  dl_start );
}
void
spFinish( Gfx **glistp )
{
	Gfx *gl;

	gl = *glistp;

	/* Turn off texturing */
	gSPTexture ( gl++, 0x8000, 0x8000, 0, G_TX_RENDERTILE, G_OFF);
	gDPSetCombineMode ( gl++, G_CC_SHADE, G_CC_SHADE);

	if (sp_attr & SP_TRANSPARENT) {
	/* Turn off transparency */
	gDPSetRenderMode( gl++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
	}

	if (sp_attr & SP_CUTOUT) {
	/* Turn off Alpha write enable */
	gDPSetAlphaCompare ( gl++, G_AC_NONE) ;
	}

	gSPEndDisplayList ( gl++ );

	*glistp = gl;
}