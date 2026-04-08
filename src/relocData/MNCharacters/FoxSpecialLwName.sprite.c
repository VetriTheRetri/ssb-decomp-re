/* Sprite: FoxSpecialLwName */

Gfx dMNCharacters_FoxSpecialLwName_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxSpecialLwName (64x7 i4) */
u8 dMNCharacters_FoxSpecialLwName_tex[] = {
    #include <MNCharacters/FoxSpecialLwName.i4.inc.c>
};

Bitmap dMNCharacters_FoxSpecialLwName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_FoxSpecialLwName_tex, 7, 0 },
};

/* Sprite: FoxSpecialLwName (64x7 i4) */
Sprite dMNCharacters_FoxSpecialLwName = {
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
	(Bitmap*)dMNCharacters_FoxSpecialLwName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
