/* Sprite: OrangeExclamationMark */

Gfx dIFCommonGameStatus_OrangeExclamationMark_dl[] = { gsSPEndDisplayList() };

/* Texture: OrangeExclamationMark (24x74 rgba32, 2 tiles) */
u8 dIFCommonGameStatus_OrangeExclamationMark_tex[] = {
    #include <IFCommonGameStatus/OrangeExclamationMark.rgba32.inc.c>
};

Bitmap dIFCommonGameStatus_OrangeExclamationMark_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonGameStatus_OrangeExclamationMark_tex, 42, 0 },
	{ 24, 24, 0, 0, dIFCommonGameStatus_OrangeExclamationMark_tex + 0xFC8, 32, 0 },
};

/* Sprite: OrangeExclamationMark (24x73 rgba32) */
Sprite dIFCommonGameStatus_OrangeExclamationMark = {
	0, 0,
	24, 73,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	41, 42,
	0, 3,
	(Bitmap*)dIFCommonGameStatus_OrangeExclamationMark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
