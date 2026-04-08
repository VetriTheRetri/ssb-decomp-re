/* Sprite: NothingTextJap */

Gfx dMNVSItemSwitch_NothingTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NothingTextJap (80x11 i4) */
u8 dMNVSItemSwitch_NothingTextJap_tex[] = {
    #include <MNVSItemSwitch/NothingTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_NothingTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_NothingTextJap_tex, 11, 0 },
};

/* Sprite: NothingTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_NothingTextJap = {
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
	(Bitmap*)dMNVSItemSwitch_NothingTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
