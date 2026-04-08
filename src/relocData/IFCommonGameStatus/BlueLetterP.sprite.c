/* Sprite: BlueLetterP */

Gfx dIFCommonGameStatus_BlueLetterP_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterP (36x58 rgba32, 3 tiles) */
u8 dIFCommonGameStatus_BlueLetterP_tex[] = {
    #include <IFCommonGameStatus/BlueLetterP.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterP_bitmaps[] = {
	{ 36, 36, 0, 0, dIFCommonGameStatus_BlueLetterP_tex, 28, 0 },
	{ 36, 36, 0, 0, dIFCommonGameStatus_BlueLetterP_tex + 0xFC8, 28, 0 },
	{ 36, 36, 0, 0, dIFCommonGameStatus_BlueLetterP_tex + 0x1F90, 2, 0 },
};

/* Sprite: BlueLetterP (36x56 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterP = {
	0, 0,
	36, 56,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	27, 28,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterP_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
