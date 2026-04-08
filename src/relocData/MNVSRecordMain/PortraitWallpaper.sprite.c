/* Sprite: PortraitWallpaper */

/* Texture: PortraitWallpaper (57(64)x56 ci4) */
u8 dMNVSRecordMain_PortraitWallpaper_tex[] = {
    #include <MNVSRecordMain/PortraitWallpaper.ci4.inc.c>
};

Bitmap dMNVSRecordMain_PortraitWallpaper_bitmaps[] = {
	{ 57, 64, 0, 0, dMNVSRecordMain_PortraitWallpaper_tex, 56, 0 },
};

/* Sprite: PortraitWallpaper (57x56 ci4) */
Sprite dMNVSRecordMain_PortraitWallpaper = {
	0, 0,
	57, 56,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x13591340,
	0, 1,
	1, 36,
	56, 56,
	2, 0,
	(Bitmap*)dMNVSRecordMain_PortraitWallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
