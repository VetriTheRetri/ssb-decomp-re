/* Sprite: HammerTextJap */

Gfx dMNVSItemSwitch_HammerTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HammerTextJap (80x11 i4) */
u8 dMNVSItemSwitch_HammerTextJap_tex[] = {
    #include <MNVSItemSwitch/HammerTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_HammerTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_HammerTextJap_tex, 11, 0 },
};

/* Sprite: HammerTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_HammerTextJap = {
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
	(Bitmap*)dMNVSItemSwitch_HammerTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
