/* Sprite: DecalButton */

Gfx dMNVSItemSwitch_DecalButton_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalButton (120(128)x118 i4c, 4 tiles) */
u8 dMNVSItemSwitch_DecalButton_tex[] = {
    #include <MNVSItemSwitch/DecalButton.i4c.inc.c>
};

Bitmap dMNVSItemSwitch_DecalButton_bitmaps[] = {
	{ 120, 128, 0, 0, dMNVSItemSwitch_DecalButton_tex, 34, 0 },
	{ 120, 128, 0, 0, dMNVSItemSwitch_DecalButton_tex + 0x888, 34, 0 },
	{ 120, 128, 0, 0, dMNVSItemSwitch_DecalButton_tex + 0x1110, 34, 0 },
	{ 120, 128, 0, 0, dMNVSItemSwitch_DecalButton_tex + 0x1998, 16, 0 },
};

/* Sprite: DecalButton (120x115 i4c) */
Sprite dMNVSItemSwitch_DecalButton = {
	0, 0,
	120, 115,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	33, 34,
	4, 4,
	(Bitmap*)dMNVSItemSwitch_DecalButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
