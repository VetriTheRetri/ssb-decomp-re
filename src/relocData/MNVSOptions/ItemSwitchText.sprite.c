/* Sprite: ItemSwitchText */

Gfx dMNVSOptions_ItemSwitchText_dl[] = { gsSPEndDisplayList() };

/* Texture: ItemSwitchText (86(96)x13 i4) */
u8 dMNVSOptions_ItemSwitchText_tex[] = {
    #include <MNVSOptions/ItemSwitchText.i4.inc.c>
};

Bitmap dMNVSOptions_ItemSwitchText_bitmaps[] = {
	{ 86, 96, 0, 0, dMNVSOptions_ItemSwitchText_tex, 13, 0 },
};

/* Sprite: ItemSwitchText (86x13 i4) */
Sprite dMNVSOptions_ItemSwitchText = {
	0, 0,
	86, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNVSOptions_ItemSwitchText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
