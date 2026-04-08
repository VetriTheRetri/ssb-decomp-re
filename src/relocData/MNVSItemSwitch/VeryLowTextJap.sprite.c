/* Sprite: VeryLowTextJap */

Gfx dMNVSItemSwitch_VeryLowTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: VeryLowTextJap (80x11 i4) */
u8 dMNVSItemSwitch_VeryLowTextJap_tex[] = {
    #include <MNVSItemSwitch/VeryLowTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_VeryLowTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_VeryLowTextJap_tex, 11, 0 },
};

/* Sprite: VeryLowTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_VeryLowTextJap = {
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
	(Bitmap*)dMNVSItemSwitch_VeryLowTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
