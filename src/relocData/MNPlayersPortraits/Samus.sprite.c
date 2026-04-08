/* Sprite: Samus */

Gfx dMNPlayersPortraits_Samus_dl[] = { gsSPEndDisplayList() };

/* Texture: Samus (45(48)x45 rgba32, 3 tiles) */
u8 dMNPlayersPortraits_Samus_tex[] = {
    #include <MNPlayersPortraits/Samus.rgba32.inc.c>
};

Bitmap dMNPlayersPortraits_Samus_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_Samus_tex, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Samus_tex + 0xFC8, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Samus_tex + 0x1F90, 3, 0 },
};

/* Sprite: Samus (45x43 rgba32) */
Sprite dMNPlayersPortraits_Samus = {
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
	(Bitmap*)dMNPlayersPortraits_Samus_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
