/* Sprite: FireFlowerTextJap */

Gfx dMNVSItemSwitch_FireFlowerTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: FireFlowerTextJap (80x11 i4) */
u8 dMNVSItemSwitch_FireFlowerTextJap_tex[] = {
    #include <MNVSItemSwitch/FireFlowerTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_FireFlowerTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_FireFlowerTextJap_tex, 11, 0 },
};

/* Sprite: FireFlowerTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_FireFlowerTextJap = {
	0, 0,
	80, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_FireFlowerTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
