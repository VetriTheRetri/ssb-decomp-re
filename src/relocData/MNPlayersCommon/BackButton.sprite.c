/* Sprite: BackButton */

/* Sprite: BackButton (48x11 ci4) */

Bitmap dMNPlayersCommon_BackButton_bitmaps[] = {
	{ 48, 48, 0, 0, dMNPlayersCommon_BackButton_tex, 11, 0 },
};

Sprite dMNPlayersCommon_BackButton = {
	0, 0,
	48, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0x11598,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_BackButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
