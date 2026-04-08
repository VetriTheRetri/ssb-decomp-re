/* Sprite: AppearanceVeryHigh */

Gfx dMNVSItemSwitch_AppearanceVeryHigh_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceVeryHigh (55(64)x11 i4) */
u8 dMNVSItemSwitch_AppearanceVeryHigh_tex[] = {
    #include <MNVSItemSwitch/AppearanceVeryHigh.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceVeryHigh_bitmaps[] = {
	{ 55, 64, 0, 0, dMNVSItemSwitch_AppearanceVeryHigh_tex, 11, 0 },
};

/* Sprite: AppearanceVeryHigh (55x11 i4) */
Sprite dMNVSItemSwitch_AppearanceVeryHigh = {
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
	(Bitmap*)dMNVSItemSwitch_AppearanceVeryHigh_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
