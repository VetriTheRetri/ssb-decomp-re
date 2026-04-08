/* Sprite: RulePeriodText */

Gfx dMNVSMode_RulePeriodText_dl[] = { gsSPEndDisplayList() };

/* Texture: RulePeriodText (54(64)x17 i4) */
u8 dMNVSMode_RulePeriodText_tex[] = {
    #include <MNVSMode/RulePeriodText.i4.inc.c>
};

Bitmap dMNVSMode_RulePeriodText_bitmaps[] = {
	{ 54, 64, 0, 0, dMNVSMode_RulePeriodText_tex, 17, 0 },
};

/* Sprite: RulePeriodText (54x17 i4) */
Sprite dMNVSMode_RulePeriodText = {
	0, 0,
	54, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNVSMode_RulePeriodText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
