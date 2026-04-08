/* Sprite: MarioSpecialHiName */

Gfx dMNCharacters_MarioSpecialHiName_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioSpecialHiName (64x7 i4) */
u8 dMNCharacters_MarioSpecialHiName_tex[] = {
    #include <MNCharacters/MarioSpecialHiName.i4.inc.c>
};

Bitmap dMNCharacters_MarioSpecialHiName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_MarioSpecialHiName_tex, 7, 0 },
};

/* Sprite: MarioSpecialHiName (64x7 i4) */
Sprite dMNCharacters_MarioSpecialHiName = {
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
	(Bitmap*)dMNCharacters_MarioSpecialHiName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
