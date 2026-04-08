/* Sprite: Winner */

Gfx dMNVSResults_Winner_dl[] = { gsSPEndDisplayList() };

/* Texture: Winner (42(44)x36 rgba16, 2 tiles) */
u8 dMNVSResults_Winner_tex[] = {
    #include <MNVSResults/Winner.rgba16.inc.c>
};

Bitmap dMNVSResults_Winner_bitmaps[] = {
	{ 42, 44, 0, 0, dMNVSResults_Winner_tex, 24, 0 },
	{ 42, 44, 0, 0, dMNVSResults_Winner_tex + 0x848, 12, 0 },
};

/* Sprite: Winner (42x35 rgba16) */
Sprite dMNVSResults_Winner = {
	0, 0,
	42, 35,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	23, 24,
	0, 2,
	(Bitmap*)dMNVSResults_Winner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
