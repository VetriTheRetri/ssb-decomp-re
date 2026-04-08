/* Sprite: NessName */

Gfx dMNCharacters_NessName_dl[] = { gsSPEndDisplayList() };

/* Texture: NessName (58(64)x39 i4c) */
u8 dMNCharacters_NessName_tex[] = {
    #include <MNCharacters/NessName.i4c.inc.c>
};

Bitmap dMNCharacters_NessName_bitmaps[] = {
	{ 58, 64, 0, 0, dMNCharacters_NessName_tex, 39, 0 },
};

/* Sprite: NessName (58x39 i4c) */
Sprite dMNCharacters_NessName = {
	0, 0,
	58, 39,
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
	(Bitmap*)dMNCharacters_NessName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
