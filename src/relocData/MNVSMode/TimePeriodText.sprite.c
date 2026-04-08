/* Sprite: TimePeriodText */

Gfx dMNVSMode_TimePeriodText_dl[] = { gsSPEndDisplayList() };

/* Texture: TimePeriodText (55(64)x18 i4) */
u8 dMNVSMode_TimePeriodText_tex[] = {
    #include <MNVSMode/TimePeriodText.i4.inc.c>
};

Bitmap dMNVSMode_TimePeriodText_bitmaps[] = {
	{ 55, 64, 0, 0, dMNVSMode_TimePeriodText_tex, 18, 0 },
};

/* Sprite: TimePeriodText (55x18 i4) */
Sprite dMNVSMode_TimePeriodText = {
	0, 0,
	55, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	4, 0,
	(Bitmap*)dMNVSMode_TimePeriodText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
