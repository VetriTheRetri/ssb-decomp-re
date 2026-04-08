/* Sprite: BlueLetterS */

Gfx dIFCommonGameStatus_BlueLetterS_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLetterS (39(40)x60 rgba32, 3 tiles) */
u8 dIFCommonGameStatus_BlueLetterS_tex[] = {
    #include <IFCommonGameStatus/BlueLetterS.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_BlueLetterS_bitmaps[] = {
	{ 39, 40, 0, 0, dIFCommonGameStatus_BlueLetterS_tex, 25, 0 },
	{ 39, 40, 0, 0, dIFCommonGameStatus_BlueLetterS_tex + 0xFA8, 25, 0 },
	{ 39, 40, 0, 0, dIFCommonGameStatus_BlueLetterS_tex + 0x1F50, 10, 0 },
};

/* Sprite: BlueLetterS (39x58 rgba32) */
Sprite dIFCommonGameStatus_BlueLetterS = {
	0, 0,
	39, 58,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	24, 25,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_BlueLetterS_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
