/* Sprite: AppearanceNone */

Gfx dMNVSItemSwitch_AppearanceNone_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceNone (51(64)x11 i4) */
u8 dMNVSItemSwitch_AppearanceNone_tex[] = {
    #include <MNVSItemSwitch/AppearanceNone.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceNone_bitmaps[] = {
	{ 51, 64, 0, 0, dMNVSItemSwitch_AppearanceNone_tex, 11, 0 },
};

/* Sprite: AppearanceNone (51x11 i4) */
Sprite dMNVSItemSwitch_AppearanceNone = {
	0, 0,
	51, 11,
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
	(Bitmap*)dMNVSItemSwitch_AppearanceNone_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
