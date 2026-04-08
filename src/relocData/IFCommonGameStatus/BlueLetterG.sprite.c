/* Sprite: BlueLetterG */

Gfx dIFCommonGameStatus_BlueLetterG_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterG (41(44)x59 rgba32, 3 tiles) */
u8 dIFCommonGameStatus_BlueLetterG_tex[] = {
    #include <IFCommonGameStatus/BlueLetterG.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterG_bitmaps[] = {
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterG_tex, 23, 0 },
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterG_tex + 0xFD8, 23, 0 },
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterG_tex + 0x1FB0, 13, 0 },
};

/* Sprite: BlueLetterG (41x57 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterG = {
	0, 0,
	41, 57,
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
	(Bitmap*)dIFCommonGameStatus_BlueLetterG_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
