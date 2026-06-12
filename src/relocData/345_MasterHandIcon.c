/* relocData file 345 (MasterHandIcon) — Master Hand's stock icon +
 * series emblem. Hand-split from the spritelist form so the stock-icon
 * palette is a real block: BossMain.stock_luts references it
 * cross-file. */

#include "relocdata_types.h"

PAD(8);

/* Texture: Stock (16x16 ci4, 1 tiles) */
/* @tex fmt=CI4 dim=16x16 lut=dMasterHandIcon_Stock_lut */
u8 dMasterHandIcon_Stock_tex[128] = {
	#include <MasterHandIcon/Stock_tex.tex.inc.c>
};

PAD(8);

u16 dMasterHandIcon_Stock_lut[16] = {
	#include <MasterHandIcon/Stock_lut.palette.inc.c>
};

Bitmap dMasterHandIcon_Stock_bitmaps[1] = {
	{ 16, 16, 0, 0, dMasterHandIcon_Stock_tex, 16, 0 },
};

/* Sprite: Stock (16x16 ci4) */
Sprite dMasterHandIcon_Stock = {
	0, 0,
	16, 16,
	1.0f, 1.0f,
	0, 0,
	0x0220,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int *)dMasterHandIcon_Stock_lut,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	dMasterHandIcon_Stock_bitmaps,
	(Gfx *)0,
	(Gfx *)0,
	0, 0,
};

PAD(12);

Gfx dMasterHandIcon_data_0x0110[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (25x25 i4, 1 tiles) */
/* @tex fmt=I4 dim=32x25 */
u8 dMasterHandIcon_FTEmblem_tex[400] = {
	#include <MasterHandIcon/FTEmblem_tex.tex.inc.c>
};

Bitmap dMasterHandIcon_FTEmblem_bitmaps[1] = {
	{ 25, 32, 0, 0, dMasterHandIcon_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (25x25 i4) */
Sprite dMasterHandIcon_FTEmblem = {
	0, 0,
	25, 25,
	1.0f, 1.0f,
	0, 0,
	0x0220,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int *)0,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	dMasterHandIcon_FTEmblem_bitmaps,
	(Gfx *)0,
	(Gfx *)0,
	0, 0,
};
