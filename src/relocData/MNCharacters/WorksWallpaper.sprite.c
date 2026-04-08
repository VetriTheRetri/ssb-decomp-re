/* Sprite: WorksWallpaper */

Gfx dMNCharacters_WorksWallpaper_dl[] = { gsSPEndDisplayList() };

/* Texture: WorksWallpaper (180(192)x47 i4, 3 tiles) */
u8 dMNCharacters_WorksWallpaper_tex[] = {
    #include <MNCharacters/WorksWallpaper.i4.inc.c>
};

Bitmap dMNCharacters_WorksWallpaper_bitmaps[] = {
	{ 180, 192, 0, 0, dMNCharacters_WorksWallpaper_tex, 21, 0 },
	{ 180, 192, 0, 0, dMNCharacters_WorksWallpaper_tex + 0x7E8, 21, 0 },
	{ 180, 192, 0, 0, dMNCharacters_WorksWallpaper_tex + 0xFD0, 5, 0 },
};

/* Sprite: WorksWallpaper (180x45 i4) */
Sprite dMNCharacters_WorksWallpaper = {
	0, 0,
	180, 45,
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
	4, 0,
	(Bitmap*)dMNCharacters_WorksWallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
