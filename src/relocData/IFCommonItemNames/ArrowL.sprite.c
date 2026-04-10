/* Sprite: ArrowL */

Gfx dIFCommonItemNames_ArrowL_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowL (9(16)x9 i4) */
u8 dIFCommonItemNames_ArrowL_tex[] = {
    #include <IFCommonItemNames/ArrowL.i4.inc.c>
};

Bitmap dIFCommonItemNames_ArrowL_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItemNames_ArrowL_tex, 9, 0 },
};

/* Sprite: ArrowL (9x9 i4) */
Sprite dIFCommonItemNames_ArrowL = {
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
	(Bitmap*)dIFCommonItemNames_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
