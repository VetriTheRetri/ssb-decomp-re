/* Sprite: ToggleSlash */

Gfx dMNVSItemSwitch_ToggleSlash_dl[] = { gsSPEndDisplayList() };

/* Texture: ToggleSlash (3(16)x8 i4) */
u8 dMNVSItemSwitch_ToggleSlash_tex[] = {
    #include <MNVSItemSwitch/ToggleSlash.i4.inc.c>
};

Bitmap dMNVSItemSwitch_ToggleSlash_bitmaps[] = {
	{ 3, 16, 0, 0, dMNVSItemSwitch_ToggleSlash_tex, 8, 0 },
};

/* Sprite: ToggleSlash (3x8 i4) */
Sprite dMNVSItemSwitch_ToggleSlash = {
	0, 0,
	3, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_ToggleSlash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
