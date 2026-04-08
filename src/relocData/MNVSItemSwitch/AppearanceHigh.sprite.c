/* Sprite: AppearanceHigh */

Gfx dMNVSItemSwitch_AppearanceHigh_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceHigh (29(32)x11 i4) */
u8 dMNVSItemSwitch_AppearanceHigh_tex[] = {
    #include <MNVSItemSwitch/AppearanceHigh.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceHigh_bitmaps[] = {
	{ 29, 32, 0, 0, dMNVSItemSwitch_AppearanceHigh_tex, 11, 0 },
};

/* Sprite: AppearanceHigh (29x11 i4) */
Sprite dMNVSItemSwitch_AppearanceHigh = {
	0, 0,
	29, 11,
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
	(Bitmap*)dMNVSItemSwitch_AppearanceHigh_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
