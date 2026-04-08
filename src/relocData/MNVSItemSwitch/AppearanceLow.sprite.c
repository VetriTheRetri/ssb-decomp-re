/* Sprite: AppearanceLow */

Gfx dMNVSItemSwitch_AppearanceLow_dl[] = { gsSPEndDisplayList() };

/* Texture: AppearanceLow (26(32)x9 i4) */
u8 dMNVSItemSwitch_AppearanceLow_tex[] = {
    #include <MNVSItemSwitch/AppearanceLow.i4.inc.c>
};

Bitmap dMNVSItemSwitch_AppearanceLow_bitmaps[] = {
	{ 26, 32, 0, 0, dMNVSItemSwitch_AppearanceLow_tex, 9, 0 },
};

/* Sprite: AppearanceLow (26x9 i4) */
Sprite dMNVSItemSwitch_AppearanceLow = {
	0, 0,
	26, 9,
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
	(Bitmap*)dMNVSItemSwitch_AppearanceLow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
