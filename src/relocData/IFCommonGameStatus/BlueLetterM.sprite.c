/* Sprite: BlueLetterM */

Gfx dIFCommonGameStatus_BlueLetterM_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterM (50(52)x59 rgba32, 4 tiles) */
u8 dIFCommonGameStatus_BlueLetterM_tex[] = {
    #include <IFCommonGameStatus/BlueLetterM.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterM_bitmaps[] = {
	{ 50, 52, 0, 0, dIFCommonGameStatus_BlueLetterM_tex, 19, 0 },
	{ 50, 52, 0, 0, dIFCommonGameStatus_BlueLetterM_tex + 0xF78, 19, 0 },
	{ 50, 52, 0, 0, dIFCommonGameStatus_BlueLetterM_tex + 0x1EF0, 19, 0 },
	{ 50, 52, 0, 0, dIFCommonGameStatus_BlueLetterM_tex + 0x2E68, 2, 0 },
};

/* Sprite: BlueLetterM (50x56 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterM = {
	0, 0,
	50, 56,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	18, 19,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterM_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
