/* Sprite: MotionSensorBombTextJap */

Gfx dMNVSItemSwitch_MotionSensorBombTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSensorBombTextJap (80x22 i4) */
u8 dMNVSItemSwitch_MotionSensorBombTextJap_tex[] = {
    #include <MNVSItemSwitch/MotionSensorBombTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_MotionSensorBombTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_MotionSensorBombTextJap_tex, 22, 0 },
};

/* Sprite: MotionSensorBombTextJap (80x22 i4) */
Sprite dMNVSItemSwitch_MotionSensorBombTextJap = {
	0, 0,
	80, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_MotionSensorBombTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
