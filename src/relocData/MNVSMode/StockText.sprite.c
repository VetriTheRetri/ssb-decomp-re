/* Sprite: StockText */

Gfx dMNVSMode_StockText_dl[] = { gsSPEndDisplayList() };

/* Texture: StockText (44(48)x13 i4) */
u8 dMNVSMode_StockText_tex[] = {
    #include <MNVSMode/StockText.i4.inc.c>
};

Bitmap dMNVSMode_StockText_bitmaps[] = {
	{ 44, 48, 0, 0, dMNVSMode_StockText_tex, 13, 0 },
};

/* Sprite: StockText (44x13 i4) */
Sprite dMNVSMode_StockText = {
	0, 0,
	44, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNVSMode_StockText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
