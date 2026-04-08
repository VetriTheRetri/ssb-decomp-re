/* Sprite: Wallpaper */

Gfx dMNVSResults_Wallpaper_dl[] = { gsSPEndDisplayList() };

/* Texture: Wallpaper (300(304)x228 i4, 9 tiles) */
u8 dMNVSResults_Wallpaper_tex[] = {
    #include <MNVSResults/Wallpaper.i4.inc.c>
};

Bitmap dMNVSResults_Wallpaper_bitmaps[] = {
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0xF78, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x1EF0, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x2E68, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x3DE0, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x4D58, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x5CD0, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x6C48, 26, 0 },
	{ 300, 304, 0, 0, dMNVSResults_Wallpaper_tex + 0x7BC0, 20, 0 },
};

/* Sprite: Wallpaper (300x220 i4) */
Sprite dMNVSResults_Wallpaper = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	9, 132,
	25, 26,
	4, 0,
	(Bitmap*)dMNVSResults_Wallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
