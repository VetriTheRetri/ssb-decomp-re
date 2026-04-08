/* Sprite: StockPeriodText */

Gfx dMNVSMode_StockPeriodText_dl[] = { gsSPEndDisplayList() };

/* Texture: StockPeriodText (64x17 i4) */
u8 dMNVSMode_StockPeriodText_tex[] = {
    #include <MNVSMode/StockPeriodText.i4.inc.c>
};

Bitmap dMNVSMode_StockPeriodText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNVSMode_StockPeriodText_tex, 17, 0 },
};

/* Sprite: StockPeriodText (64x17 i4) */
Sprite dMNVSMode_StockPeriodText = {
	0, 0,
	64, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNVSMode_StockPeriodText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
