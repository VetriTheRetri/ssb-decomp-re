/* Sprite: CaptainStory */

Gfx dMNCharacters_CaptainStory_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainStory (160x115 i4c, 3 tiles) */
u8 dMNCharacters_CaptainStory_tex[] = {
    #include <MNCharacters/CaptainStory.i4c.inc.c>
};

Bitmap dMNCharacters_CaptainStory_bitmaps[] = {
	{ 160, 160, 0, 0, dMNCharacters_CaptainStory_tex, 51, 0 },
	{ 160, 160, 0, 0, dMNCharacters_CaptainStory_tex + 0xFF8, 51, 0 },
	{ 160, 160, 0, 0, dMNCharacters_CaptainStory_tex + 0x1FF0, 13, 0 },
};

/* Sprite: CaptainStory (160x113 i4c) */
Sprite dMNCharacters_CaptainStory = {
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
	(Bitmap*)dMNCharacters_CaptainStory_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
