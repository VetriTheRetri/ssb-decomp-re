/* Sprite: MotionSensorBombJap */

Gfx dIFCommonItemNames_MotionSensorBombJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSensorBombJap (64x19 i4) */
u8 dIFCommonItemNames_MotionSensorBombJap_tex[] = {
    #include <IFCommonItemNames/MotionSensorBombJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_MotionSensorBombJap_bitmaps[] = {
	{ 64, 64, 0, 0, dIFCommonItemNames_MotionSensorBombJap_tex, 19, 0 },
};

/* Sprite: MotionSensorBombJap (64x19 i4) */
Sprite dIFCommonItemNames_MotionSensorBombJap = {
	0, 0,
	64, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dIFCommonItemNames_MotionSensorBombJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
