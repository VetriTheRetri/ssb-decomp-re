/* Sprite: BannerBottom */

/* Sprite: BannerBottom (300x50 ci4) */

Bitmap dSC1PIntro_BannerBottom_bitmaps[] = {
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x398, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x730, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0xAC8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0xE60, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x11F8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1590, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1928, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1CC0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x2058, 5, 0 },
};

Sprite dSC1PIntro_BannerBottom = {
	0, 0,
	300, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0xEC40,
	0, 1,
	10, 144,
	5, 6,
	2, 0,
	(Bitmap*)dSC1PIntro_BannerBottom_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
