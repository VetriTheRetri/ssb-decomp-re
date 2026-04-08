/* Sprite: BlueLetterE */

Gfx dIFCommonGameStatus_BlueLetterE_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterE (32x57 rgba32, 2 tiles) */
u8 dIFCommonGameStatus_BlueLetterE_tex[] = {
    #include <IFCommonGameStatus/BlueLetterE.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterE_bitmaps[] = {
	{ 32, 32, 0, 0, dIFCommonGameStatus_BlueLetterE_tex, 32, 0 },
	{ 32, 32, 0, 0, dIFCommonGameStatus_BlueLetterE_tex + 0x1008, 25, 0 },
};

/* Sprite: BlueLetterE (32x56 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterE = {
	0, 0,
	32, 56,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	31, 32,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterE_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
