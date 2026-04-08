/* Sprite: LampYellowLight */

Gfx dIFCommonGameStatus_LampYellowLight_dl[] = { gsSPEndDisplayList() };

/* Texture: LampYellowLight (30(32)x32 i8) */
u8 dIFCommonGameStatus_LampYellowLight_tex[] = {
    #include <IFCommonGameStatus/LampYellowLight.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampYellowLight_bitmaps[] = {
	{ 30, 32, 0, 0, dIFCommonGameStatus_LampYellowLight_tex, 32, 0 },
};

/* Sprite: LampYellowLight (30x32 i8) */
Sprite dIFCommonGameStatus_LampYellowLight = {
	0, 0,
	30, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampYellowLight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
