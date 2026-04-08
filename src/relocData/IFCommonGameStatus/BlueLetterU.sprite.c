/* Sprite: BlueLetterU */

Gfx dIFCommonGameStatus_BlueLetterU_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterU (41(44)x60 rgba32, 3 tiles) */
u8 dIFCommonGameStatus_BlueLetterU_tex[] = {
    #include <IFCommonGameStatus/BlueLetterU.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterU_bitmaps[] = {
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterU_tex, 23, 0 },
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterU_tex + 0xFD8, 23, 0 },
	{ 41, 44, 0, 0, dIFCommonGameStatus_BlueLetterU_tex + 0x1FB0, 14, 0 },
};

/* Sprite: BlueLetterU (41x58 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterU = {
	0, 0,
	41, 58,
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
	(Bitmap*)dIFCommonGameStatus_BlueLetterU_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
