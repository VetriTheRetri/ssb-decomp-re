/* Sprite: ArrowL */

/* Sprite: ArrowL (7x11 ci4) */

Bitmap dMNPlayersCommon_ArrowL_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_ArrowL_tex, 11, 0 },
};

Sprite dMNPlayersCommon_ArrowL = {
	0, 0,
	7, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0xECB8,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
