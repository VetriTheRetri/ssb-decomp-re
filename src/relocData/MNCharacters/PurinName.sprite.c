/* Sprite: PurinName */

Gfx dMNCharacters_PurinName_dl[] = { gsSPEndDisplayList() };

/* Texture: PurinName (72(80)x79 i4c) */
u8 dMNCharacters_PurinName_tex[] = {
    #include <MNCharacters/PurinName.i4c.inc.c>
};

Bitmap dMNCharacters_PurinName_bitmaps[] = {
	{ 72, 80, 0, 0, dMNCharacters_PurinName_tex, 79, 0 },
};

/* Sprite: PurinName (72x79 i4c) */
Sprite dMNCharacters_PurinName = {
	0, 0,
	72, 79,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	79, 79,
	4, 4,
	(Bitmap*)dMNCharacters_PurinName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
