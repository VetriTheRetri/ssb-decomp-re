/* Sprite: BumperTextJap */

Gfx dMNVSItemSwitch_BumperTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: BumperTextJap (80x11 i4) */
u8 dMNVSItemSwitch_BumperTextJap_tex[] = {
    #include <MNVSItemSwitch/BumperTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_BumperTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_BumperTextJap_tex, 11, 0 },
};

/* Sprite: BumperTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_BumperTextJap = {
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
	(Bitmap*)dMNVSItemSwitch_BumperTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
