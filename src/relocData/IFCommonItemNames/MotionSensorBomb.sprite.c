/* Sprite: MotionSensorBomb */

Gfx dIFCommonItemNames_MotionSensorBomb_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSensorBomb (126(128)x16 ia8) */
u8 dIFCommonItemNames_MotionSensorBomb_tex[] = {
    #include <IFCommonItemNames/MotionSensorBomb.ia8.inc.c>
};

Bitmap dIFCommonItemNames_MotionSensorBomb_bitmaps[] = {
	{ 126, 128, 0, 0, dIFCommonItemNames_MotionSensorBomb_tex, 16, 0 },
};

/* Sprite: MotionSensorBomb (126x16 ia8) */
Sprite dIFCommonItemNames_MotionSensorBomb = {
	0, 0,
	126, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dIFCommonItemNames_MotionSensorBomb_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
