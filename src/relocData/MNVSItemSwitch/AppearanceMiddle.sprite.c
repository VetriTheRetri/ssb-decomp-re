/* Sprite: AppearanceMiddle */

Gfx dMNVSItemSwitch_AppearanceMiddle_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceMiddle (47(48)x9 i4) */
u8 dMNVSItemSwitch_AppearanceMiddle_tex[] = {
    #include <MNVSItemSwitch/AppearanceMiddle.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceMiddle_bitmaps[] = {
	{ 47, 48, 0, 0, dMNVSItemSwitch_AppearanceMiddle_tex, 9, 0 },
};

/* Sprite: AppearanceMiddle (47x9 i4) */
Sprite dMNVSItemSwitch_AppearanceMiddle = {
	0, 0,
	47, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_AppearanceMiddle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
