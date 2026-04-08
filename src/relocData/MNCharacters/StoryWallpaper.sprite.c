/* Sprite: StoryWallpaper */

Gfx dMNCharacters_StoryWallpaper_dl[] = { gsSPEndDisplayList() };

/* Texture: StoryWallpaper (64x113 i4) */
u8 dMNCharacters_StoryWallpaper_tex[] = {
    #include <MNCharacters/StoryWallpaper.i4.inc.c>
};

Bitmap dMNCharacters_StoryWallpaper_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_StoryWallpaper_tex, 113, 0 },
};

/* Sprite: StoryWallpaper (64x113 i4) */
Sprite dMNCharacters_StoryWallpaper = {
	0, 0,
	64, 113,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	113, 113,
	4, 0,
	(Bitmap*)dMNCharacters_StoryWallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
