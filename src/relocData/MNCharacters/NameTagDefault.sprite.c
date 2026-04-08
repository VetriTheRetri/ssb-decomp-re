/* Sprite: NameTagDefault */

Gfx dMNCharacters_NameTagDefault_dl[] = { gsSPEndDisplayList() };

/* Texture: NameTagDefault (102(112)x53 i4c) */
u8 dMNCharacters_NameTagDefault_tex[] = {
    #include <MNCharacters/NameTagDefault.i4c.inc.c>
};

Bitmap dMNCharacters_NameTagDefault_bitmaps[] = {
	{ 102, 112, 0, 0, dMNCharacters_NameTagDefault_tex, 53, 0 },
};

/* Sprite: NameTagDefault (102x53 i4c) */
Sprite dMNCharacters_NameTagDefault = {
	0, 0,
	102, 53,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	53, 53,
	4, 4,
	(Bitmap*)dMNCharacters_NameTagDefault_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
