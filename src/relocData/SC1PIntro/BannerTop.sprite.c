/* Sprite: BannerTop */

/* Sprite: BannerTop (300x50 ci8) */

Bitmap dSC1PIntro_BannerTop_bitmaps[] = {
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x4068, 5, 0 },
};

Sprite dSC1PIntro_BannerTop = {
	0, 0,
	300, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0xC5F8,
	0, 1,
	10, 144,
	5, 6,
	2, 1,
	(Bitmap*)dSC1PIntro_BannerTop_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
