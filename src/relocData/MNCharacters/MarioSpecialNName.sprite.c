/* Sprite: MarioSpecialNName */

Gfx dMNCharacters_MarioSpecialNName_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioSpecialNName (64x7 i4) */
u8 dMNCharacters_MarioSpecialNName_tex[] = {
    #include <MNCharacters/MarioSpecialNName.i4.inc.c>
};

Bitmap dMNCharacters_MarioSpecialNName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_MarioSpecialNName_tex, 7, 0 },
};

/* Sprite: MarioSpecialNName (64x7 i4) */
Sprite dMNCharacters_MarioSpecialNName = {
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
	(Bitmap*)dMNCharacters_MarioSpecialNName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
