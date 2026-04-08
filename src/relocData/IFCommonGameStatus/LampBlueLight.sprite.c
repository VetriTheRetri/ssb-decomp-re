/* Sprite: LampBlueLight */

Gfx dIFCommonGameStatus_LampBlueLight_dl[] = { gsSPEndDisplayList() };

/* Texture: LampBlueLight (46(48)x49 i8) */
u8 dIFCommonGameStatus_LampBlueLight_tex[] = {
    #include <IFCommonGameStatus/LampBlueLight.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampBlueLight_bitmaps[] = {
	{ 46, 48, 0, 0, dIFCommonGameStatus_LampBlueLight_tex, 49, 0 },
};

/* Sprite: LampBlueLight (46x49 i8) */
Sprite dIFCommonGameStatus_LampBlueLight = {
	0, 0,
	46, 49,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	49, 49,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampBlueLight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
