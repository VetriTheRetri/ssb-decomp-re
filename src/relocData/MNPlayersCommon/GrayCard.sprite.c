/* Sprite: GrayCard */

/* Sprite: GrayCard (66x91 ci4) */

Bitmap dMNPlayersCommon_GrayCard_bitmaps[] = {
	{ 66, 80, 0, 0, dMNPlayersCommon_GrayCard_tex, 50, 0 },
	{ 66, 80, 0, 0, dMNPlayersCommon_GrayCard_tex + 0x7D8, 42, 0 },
};

Sprite dMNPlayersCommon_GrayCard = {
	0, 0,
	66, 91,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_GateCom1P_palette,
	0, 1,
	2, 48,
	49, 50,
	2, 0,
	(Bitmap*)dMNPlayersCommon_GrayCard_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
