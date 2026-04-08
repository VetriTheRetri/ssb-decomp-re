/* Sprite: StarTextJap */

Gfx dMNVSItemSwitch_StarTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StarTextJap (80x11 i4) */
u8 dMNVSItemSwitch_StarTextJap_tex[] = {
    #include <MNVSItemSwitch/StarTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_StarTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_StarTextJap_tex, 11, 0 },
};

/* Sprite: StarTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_StarTextJap = {
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
	(Bitmap*)dMNVSItemSwitch_StarTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
