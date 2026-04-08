/* Sprite: LampYellowContour */

Gfx dIFCommonGameStatus_LampYellowContour_dl[] = { gsSPEndDisplayList() };

/* Texture: LampYellowContour (53(56)x53 i8) */
u8 dIFCommonGameStatus_LampYellowContour_tex[] = {
    #include <IFCommonGameStatus/LampYellowContour.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampYellowContour_bitmaps[] = {
	{ 53, 56, 0, 0, dIFCommonGameStatus_LampYellowContour_tex, 53, 0 },
};

/* Sprite: LampYellowContour (53x53 i8) */
Sprite dIFCommonGameStatus_LampYellowContour = {
	0, 0,
	53, 53,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	53, 53,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampYellowContour_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
