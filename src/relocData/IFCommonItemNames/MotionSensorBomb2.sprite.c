/* Sprite: MotionSensorBomb2 */

Gfx dIFCommonItemNames_MotionSensorBomb2_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSensorBomb2 (86(88)x17 ia8) */
u8 dIFCommonItemNames_MotionSensorBomb2_tex[] = {
    #include <IFCommonItemNames/MotionSensorBomb2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_MotionSensorBomb2_bitmaps[] = {
	{ 86, 88, 0, 0, dIFCommonItemNames_MotionSensorBomb2_tex, 17, 0 },
};

/* Sprite: MotionSensorBomb2 (86x17 ia8) */
Sprite dIFCommonItemNames_MotionSensorBomb2 = {
	0, 0,
	86, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	3, 1,
	(Bitmap*)dIFCommonItemNames_MotionSensorBomb2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
