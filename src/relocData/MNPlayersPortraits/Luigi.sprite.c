/* Sprite: Luigi */

Gfx dMNPlayersPortraits_Luigi_dl[] = { gsSPEndDisplayList() };

/* Texture: Luigi (45(48)x45 rgba32, 3 tiles) */
u8 dMNPlayersPortraits_Luigi_tex[] = {
    #include <MNPlayersPortraits/Luigi.rgba32.inc.c>
};

Bitmap dMNPlayersPortraits_Luigi_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_Luigi_tex, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Luigi_tex + 0xFC8, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Luigi_tex + 0x1F90, 3, 0 },
};

/* Sprite: Luigi (45x43 rgba32) */
Sprite dMNPlayersPortraits_Luigi = {
	0, 0,
	45, 43,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	20, 21,
	0, 3,
	(Bitmap*)dMNPlayersPortraits_Luigi_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
