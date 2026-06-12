/* relocData file 319 (DkIcon) — DK's stock icon + series emblem.
 * Hand-split from the spritelist form so the five stock-icon palette
 * frames (one per costume + default) are real blocks: DonkeyMain /
 * GDonkeyMain stock_luts reference them cross-file. */

#include "relocdata_types.h"

PAD(8);

/* Texture: Stock (8x10 ci4, 1 tiles) */
/* @tex fmt=CI4 dim=16x10 lut=dDkIcon_Stock_lut0 */
u8 dDkIcon_Stock_tex[80] = {
	#include <DkIcon/Stock_tex.tex.inc.c>
};

PAD(8);

/* Stock-icon palette frames (costume colors). */
u16 dDkIcon_Stock_lut0[20] = {
	#include <DkIcon/Stock_lut0.palette.inc.c>
};
u16 dDkIcon_Stock_lut1[20] = {
	#include <DkIcon/Stock_lut1.palette.inc.c>
};
u16 dDkIcon_Stock_lut2[20] = {
	#include <DkIcon/Stock_lut2.palette.inc.c>
};
u16 dDkIcon_Stock_lut3[20] = {
	#include <DkIcon/Stock_lut3.palette.inc.c>
};
u16 dDkIcon_Stock_lut4[16] = {
	#include <DkIcon/Stock_lut4.palette.inc.c>
};

Bitmap dDkIcon_Stock_bitmaps[1] = {
	{ 8, 16, 0, 0, dDkIcon_Stock_tex, 10, 0 },
};

/* Sprite: Stock (8x10 ci4) */
Sprite dDkIcon_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	0x0220,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int *)dDkIcon_Stock_lut0,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	dDkIcon_Stock_bitmaps,
	(Gfx *)0,
	(Gfx *)0,
	0, 0,
};

PAD(12);

Gfx dDkIcon_data_0x0180[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (30x22 i4, 1 tiles) */
/* @tex fmt=I4 dim=32x22 */
u8 dDkIcon_FTEmblem_tex[352] = {
	#include <DkIcon/FTEmblem_tex.tex.inc.c>
};

Bitmap dDkIcon_FTEmblem_bitmaps[1] = {
	{ 30, 32, 0, 0, dDkIcon_FTEmblem_tex, 22, 0 },
};

/* Sprite: FTEmblem (30x22 i4) */
Sprite dDkIcon_FTEmblem = {
	0, 0,
	30, 22,
	1.0f, 1.0f,
	0, 0,
	0x0220,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int *)0,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	dDkIcon_FTEmblem_bitmaps,
	(Gfx *)0,
	(Gfx *)0,
	0, 0,
};
