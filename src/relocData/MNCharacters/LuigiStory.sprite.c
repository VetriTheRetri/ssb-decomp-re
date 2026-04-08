/* Sprite: LuigiStory */

Gfx dMNCharacters_LuigiStory_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiStory (160x115 i4c, 3 tiles) */
u8 dMNCharacters_LuigiStory_tex[] = {
    #include <MNCharacters/LuigiStory.i4c.inc.c>
};

Bitmap dMNCharacters_LuigiStory_bitmaps[] = {
	{ 160, 160, 0, 0, dMNCharacters_LuigiStory_tex, 51, 0 },
	{ 160, 160, 0, 0, dMNCharacters_LuigiStory_tex + 0xFF8, 51, 0 },
	{ 160, 160, 0, 0, dMNCharacters_LuigiStory_tex + 0x1FF0, 13, 0 },
};

/* Sprite: LuigiStory (160x113 i4c) */
Sprite dMNCharacters_LuigiStory = {
	0, 0,
	160, 113,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	50, 51,
	4, 4,
	(Bitmap*)dMNCharacters_LuigiStory_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
