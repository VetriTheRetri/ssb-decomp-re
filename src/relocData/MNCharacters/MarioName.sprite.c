/* Sprite: MarioName */

Gfx dMNCharacters_MarioName_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioName (67(80)x40 i4c) */
u8 dMNCharacters_MarioName_tex[] = {
    #include <MNCharacters/MarioName.i4c.inc.c>
};

Bitmap dMNCharacters_MarioName_bitmaps[] = {
	{ 67, 80, 0, 0, dMNCharacters_MarioName_tex, 40, 0 },
};

/* Sprite: MarioName (67x40 i4c) */
Sprite dMNCharacters_MarioName = {
	0, 0,
	67, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	4, 4,
	(Bitmap*)dMNCharacters_MarioName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
