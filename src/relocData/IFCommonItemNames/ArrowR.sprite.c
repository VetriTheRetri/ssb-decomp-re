/* Sprite: ArrowR */

Gfx dIFCommonItemNames_ArrowR_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowR (9(16)x9 i4) */
u8 dIFCommonItemNames_ArrowR_tex[] = {
    #include <IFCommonItemNames/ArrowR.i4.inc.c>
};

Bitmap dIFCommonItemNames_ArrowR_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItemNames_ArrowR_tex, 9, 0 },
};

/* Sprite: ArrowR (9x9 i4) */
Sprite dIFCommonItemNames_ArrowR = {
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
	(Bitmap*)dIFCommonItemNames_ArrowR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
