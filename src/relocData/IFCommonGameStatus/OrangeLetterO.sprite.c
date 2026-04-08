/* Sprite: OrangeLetterO */

Gfx dIFCommonGameStatus_OrangeLetterO_dl[] = { gsSPEndDisplayList() };

/* Texture: OrangeLetterO (70(72)x79 rgba32, 6 tiles) */
u8 dIFCommonGameStatus_OrangeLetterO_tex[] = {
    #include <IFCommonGameStatus/OrangeLetterO.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_OrangeLetterO_bitmaps[] = {
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex, 14, 0 },
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex + 0xFC8, 14, 0 },
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex + 0x1F90, 14, 0 },
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex + 0x2F58, 14, 0 },
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex + 0x3F20, 14, 0 },
	{ 70, 72, 0, 0, dIFCommonGameStatus_OrangeLetterO_tex + 0x4EE8, 9, 0 },
};

/* Sprite: OrangeLetterO (70x74 rgba32) */
Sprite dIFCommonGameStatus_OrangeLetterO = {
	0, 0,
	70, 74,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	6, 96,
	13, 14,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_OrangeLetterO_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
