/* Sprite: MotionSensorBombJap */

Gfx dRelocFile29_MotionSensorBombJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSensorBombJap (64x19 i4) */
u8 dRelocFile29_MotionSensorBombJap_tex[] = {
    #include <file_29/MotionSensorBombJap.i4.inc.c>
};

Bitmap dRelocFile29_MotionSensorBombJap_bitmaps[] = {
	{ 64, 64, 0, 0, dRelocFile29_MotionSensorBombJap_tex, 19, 0 },
};

/* Sprite: MotionSensorBombJap (64x19 i4) */
Sprite dRelocFile29_MotionSensorBombJap = {
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
	(Bitmap*)dRelocFile29_MotionSensorBombJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
