/* Sprite: BlueLetterA */

Gfx dIFCommonGameStatus_BlueLetterA_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterA (43(44)x58 rgba32, 3 tiles) */
u8 dIFCommonGameStatus_BlueLetterA_tex[] = {
    #include <IFCommonGameStatus/BlueLetterA.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterA_bitmaps[] = {
	{ 43, 44, 0, 0, dIFCommonGameStatus_BlueLetterA_tex, 23, 0 },
	{ 43, 44, 0, 0, dIFCommonGameStatus_BlueLetterA_tex + 0xFD8, 23, 0 },
	{ 43, 44, 0, 0, dIFCommonGameStatus_BlueLetterA_tex + 0x1FB0, 12, 0 },
};

/* Sprite: BlueLetterA (43x56 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterA = {
	0, 0,
	43, 56,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	22, 23,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterA_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
