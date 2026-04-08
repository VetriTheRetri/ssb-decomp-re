/* Sprite: Purin */

Gfx dMNPlayersPortraits_Purin_dl[] = { gsSPEndDisplayList() };

/* Texture: Purin (45(48)x45 rgba32, 3 tiles) */
u8 dMNPlayersPortraits_Purin_tex[] = {
    #include <MNPlayersPortraits/Purin.rgba32.inc.c>
};

Bitmap dMNPlayersPortraits_Purin_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_Purin_tex, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Purin_tex + 0xFC8, 21, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_Purin_tex + 0x1F90, 3, 0 },
};

/* Sprite: Purin (45x43 rgba32) */
Sprite dMNPlayersPortraits_Purin = {
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
	(Bitmap*)dMNPlayersPortraits_Purin_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
