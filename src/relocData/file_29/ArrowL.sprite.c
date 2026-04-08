/* Sprite: ArrowL */

Gfx dRelocFile29_ArrowL_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowL (9(16)x9 i4) */
u8 dRelocFile29_ArrowL_tex[] = {
    #include <file_29/ArrowL.i4.inc.c>
};

Bitmap dRelocFile29_ArrowL_bitmaps[] = {
	{ 9, 16, 0, 0, dRelocFile29_ArrowL_tex, 9, 0 },
};

/* Sprite: ArrowL (9x9 i4) */
Sprite dRelocFile29_ArrowL = {
	0, 0,
	9, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dRelocFile29_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
