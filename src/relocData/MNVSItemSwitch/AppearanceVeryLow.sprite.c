/* Sprite: AppearanceVeryLow */

Gfx dMNVSItemSwitch_AppearanceVeryLow_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceVeryLow (55(64)x11 i4) */
u8 dMNVSItemSwitch_AppearanceVeryLow_tex[] = {
    #include <MNVSItemSwitch/AppearanceVeryLow.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceVeryLow_bitmaps[] = {
	{ 55, 64, 0, 0, dMNVSItemSwitch_AppearanceVeryLow_tex, 11, 0 },
};

/* Sprite: AppearanceVeryLow (55x11 i4) */
Sprite dMNVSItemSwitch_AppearanceVeryLow = {
	0, 0,
	55, 11,
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
	(Bitmap*)dMNVSItemSwitch_AppearanceVeryLow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
