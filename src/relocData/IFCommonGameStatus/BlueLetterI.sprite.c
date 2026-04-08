/* Sprite: BlueLetterI */

Gfx dIFCommonGameStatus_BlueLetterI_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterI (17(20)x58 rgba32, 2 tiles) */
u8 dIFCommonGameStatus_BlueLetterI_tex[] = {
    #include <IFCommonGameStatus/BlueLetterI.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterI_bitmaps[] = {
	{ 17, 20, 0, 0, dIFCommonGameStatus_BlueLetterI_tex, 51, 0 },
	{ 17, 20, 0, 0, dIFCommonGameStatus_BlueLetterI_tex + 0xFF8, 7, 0 },
};

/* Sprite: BlueLetterI (17x57 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterI = {
	0, 0,
	17, 57,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	50, 51,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterI_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
