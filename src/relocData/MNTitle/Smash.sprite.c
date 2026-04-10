/* Sprite: Smash */

Gfx dMNTitle_Smash_dl[] = { gsSPEndDisplayList() };

/* Texture: Smash (172x82 rgba32, 21 tiles) */
u8 dMNTitle_Smash_tex[] = {
    #include <MNTitle/Smash.rgba32.inc.c>
};

Bitmap dMNTitle_Smash_bitmaps[] = {
	{ 172, 172, 0, 0, dMNTitle_Smash_tex, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xAC8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x1590, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x2058, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x2B20, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x35E8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x40B0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x4B78, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x5640, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x6108, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x6BD0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x7698, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x8160, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x8C28, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x96F0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xA1B8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xAC80, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xB748, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xC210, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xCCD8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xD7A0, 2, 0 },
};

/* Sprite: Smash (172x62 rgba32) */
Sprite dMNTitle_Smash = {
	0, 0,
	172, 62,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	21, 276,
	3, 4,
	0, 3,
	(Bitmap*)dMNTitle_Smash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
