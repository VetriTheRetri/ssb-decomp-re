/* Sprite: Donkey */

Gfx dMVOpeningPortraitsSet2_Donkey_dl[] = { gsSPEndDisplayList() };

/* Texture: Donkey (300x65 rgba16, 11 tiles) */
u8 dMVOpeningPortraitsSet2_Donkey_tex[] = {
    #include <MVOpeningPortraitsSet2/Donkey.rgba16.inc.c>
};

Bitmap dMVOpeningPortraitsSet2_Donkey_bitmaps[] = {
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0xE18, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x1C30, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x2A48, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x3860, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x4678, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x5490, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x62A8, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x70C0, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x7ED8, 6, 0 },
	{ 300, 300, 0, 0, dMVOpeningPortraitsSet2_Donkey_tex + 0x8CF0, 5, 0 },
};

/* Sprite: Donkey (300x55 rgba16) */
Sprite dMVOpeningPortraitsSet2_Donkey = {
	0, 0,
	300, 55,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	11, 156,
	5, 6,
	0, 2,
	(Bitmap*)dMVOpeningPortraitsSet2_Donkey_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
