/* Sprite: FoxName */

Gfx dMNCharacters_FoxName_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxName (42(48)x39 i4c) */
u8 dMNCharacters_FoxName_tex[] = {
    #include <MNCharacters/FoxName.i4c.inc.c>
};

Bitmap dMNCharacters_FoxName_bitmaps[] = {
	{ 42, 48, 0, 0, dMNCharacters_FoxName_tex, 39, 0 },
};

/* Sprite: FoxName (42x39 i4c) */
Sprite dMNCharacters_FoxName = {
	0, 0,
	42, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	39, 39,
	4, 4,
	(Bitmap*)dMNCharacters_FoxName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
