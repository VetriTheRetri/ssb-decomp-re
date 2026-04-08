/* Sprite: Race */

/* Texture: Race (300(304)x155 ci8, 26 tiles) */
u8 dBonusPicture_Race_tex[] = {
    #include <BonusPicture/Race.ci8.inc.c>
};

Bitmap dBonusPicture_Race_bitmaps[] = {
	{ 300, 304, 0, 0, dBonusPicture_Race_tex, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x4068, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x4790, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x4EB8, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x55E0, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x5D08, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x6430, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x6B58, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x7280, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x79A8, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x80D0, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x87F8, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x8F20, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x9648, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0x9D70, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0xA498, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0xABC0, 6, 0 },
	{ 300, 304, 0, 0, dBonusPicture_Race_tex + 0xB2E8, 5, 0 },
};

/* Sprite: Race (300x130 ci8) */
Sprite dBonusPicture_Race = {
	0, 0,
	300, 130,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x69A368AE,
	0, 1,
	26, 336,
	5, 6,
	2, 1,
	(Bitmap*)dBonusPicture_Race_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
