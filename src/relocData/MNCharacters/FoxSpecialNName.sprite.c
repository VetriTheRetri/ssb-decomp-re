/* Sprite: FoxSpecialNName */

Gfx dMNCharacters_FoxSpecialNName_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxSpecialNName (64x7 i4) */
u8 dMNCharacters_FoxSpecialNName_tex[] = {
    #include <MNCharacters/FoxSpecialNName.i4.inc.c>
};

Bitmap dMNCharacters_FoxSpecialNName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_FoxSpecialNName_tex, 7, 0 },
};

/* Sprite: FoxSpecialNName (64x7 i4) */
Sprite dMNCharacters_FoxSpecialNName = {
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
	(Bitmap*)dMNCharacters_FoxSpecialNName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
