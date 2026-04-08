/* Sprite: LampBlueContour */

Gfx dIFCommonGameStatus_LampBlueContour_dl[] = { gsSPEndDisplayList() };

/* Texture: LampBlueContour (55(56)x55 i8) */
u8 dIFCommonGameStatus_LampBlueContour_tex[] = {
    #include <IFCommonGameStatus/LampBlueContour.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampBlueContour_bitmaps[] = {
	{ 55, 56, 0, 0, dIFCommonGameStatus_LampBlueContour_tex, 55, 0 },
};

/* Sprite: LampBlueContour (55x55 i8) */
Sprite dIFCommonGameStatus_LampBlueContour = {
	0, 0,
	55, 55,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	55, 55,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampBlueContour_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
