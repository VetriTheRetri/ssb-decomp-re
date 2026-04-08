/* Sprite: PurinSpecialNName */

Gfx dMNCharacters_PurinSpecialNName_dl[] = { gsSPEndDisplayList() };

/* Texture: PurinSpecialNName (64x7 i4) */
u8 dMNCharacters_PurinSpecialNName_tex[] = {
    #include <MNCharacters/PurinSpecialNName.i4.inc.c>
};

Bitmap dMNCharacters_PurinSpecialNName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_PurinSpecialNName_tex, 7, 0 },
};

/* Sprite: PurinSpecialNName (64x7 i4) */
Sprite dMNCharacters_PurinSpecialNName = {
	0, 0,
	64, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNCharacters_PurinSpecialNName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
