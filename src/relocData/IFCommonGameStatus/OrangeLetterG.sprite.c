/* Sprite: OrangeLetterG */

Gfx dIFCommonGameStatus_OrangeLetterG_dl[] = { gsSPEndDisplayList() };

/* Texture: OrangeLetterG (62(64)x77 rgba32, 5 tiles) */
u8 dIFCommonGameStatus_OrangeLetterG_tex[] = {
    #include <IFCommonGameStatus/OrangeLetterG.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_OrangeLetterG_bitmaps[] = {
	{ 62, 64, 0, 0, dIFCommonGameStatus_OrangeLetterG_tex, 16, 0 },
	{ 62, 64, 0, 0, dIFCommonGameStatus_OrangeLetterG_tex + 0x1008, 16, 0 },
	{ 62, 64, 0, 0, dIFCommonGameStatus_OrangeLetterG_tex + 0x2010, 16, 0 },
	{ 62, 64, 0, 0, dIFCommonGameStatus_OrangeLetterG_tex + 0x3018, 16, 0 },
	{ 62, 64, 0, 0, dIFCommonGameStatus_OrangeLetterG_tex + 0x4020, 13, 0 },
};

/* Sprite: OrangeLetterG (62x73 rgba32) */
Sprite dIFCommonGameStatus_OrangeLetterG = {
	0, 0,
	62, 73,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	5, 84,
	15, 16,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_OrangeLetterG_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
