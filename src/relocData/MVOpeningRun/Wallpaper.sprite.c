/* Sprite: Wallpaper */

/* Sprite: Wallpaper (160x120 ci8) */

Bitmap dMVOpeningRun_Wallpaper_bitmaps[] = {
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x788, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0xF10, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x1698, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x1E20, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x25A8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x2D30, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x34B8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x3C40, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x43C8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x4B50, 10, 0 },
};

Sprite dMVOpeningRun_Wallpaper = {
	0, 0,
	160, 120,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMVOpeningRun_palette_0x56C0,
	0, 1,
	11, 156,
	11, 12,
	2, 1,
	(Bitmap*)dMVOpeningRun_Wallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
