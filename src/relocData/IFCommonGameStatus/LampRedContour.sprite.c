/* Sprite: LampRedContour */

Gfx dIFCommonGameStatus_LampRedContour_dl[] = { gsSPEndDisplayList() };

/* Texture: LampRedContour (48x57 i8) */
u8 dIFCommonGameStatus_LampRedContour_tex[] = {
    #include <IFCommonGameStatus/LampRedContour.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampRedContour_bitmaps[] = {
	{ 48, 48, 0, 0, dIFCommonGameStatus_LampRedContour_tex, 57, 0 },
};

/* Sprite: LampRedContour (48x57 i8) */
Sprite dIFCommonGameStatus_LampRedContour = {
	0, 0,
	48, 57,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	57, 57,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampRedContour_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
