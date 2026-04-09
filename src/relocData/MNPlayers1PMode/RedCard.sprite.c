/* Sprite: RedCard */

/* Sprite: RedCard (82x91 ci4) */

Bitmap dMNPlayers1PMode_RedCard_bitmaps[] = {
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0x3F8, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0x7F0, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0xBE8, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0xFE0, 11, 0 },
};

Sprite dMNPlayers1PMode_RedCard = {
	0, 0,
	82, 91,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayers1PMode_palette_0x3210,
	0, 1,
	5, 84,
	20, 21,
	2, 0,
	(Bitmap*)dMNPlayers1PMode_RedCard_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
