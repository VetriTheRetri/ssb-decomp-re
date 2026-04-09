/* Sprite: ArrowR */

/* Sprite: ArrowR (7x11 ci4) */

Bitmap dMNPlayersCommon_ArrowR_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_ArrowR_tex, 11, 0 },
};

Sprite dMNPlayersCommon_ArrowR = {
	0, 0,
	7, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0xED98,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_ArrowR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
