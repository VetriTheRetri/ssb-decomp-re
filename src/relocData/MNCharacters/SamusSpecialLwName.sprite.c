/* Sprite: SamusSpecialLwName */

Gfx dMNCharacters_SamusSpecialLwName_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusSpecialLwName (64x7 i4) */
u8 dMNCharacters_SamusSpecialLwName_tex[] = {
    #include <MNCharacters/SamusSpecialLwName.i4.inc.c>
};

Bitmap dMNCharacters_SamusSpecialLwName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_SamusSpecialLwName_tex, 7, 0 },
};

/* Sprite: SamusSpecialLwName (64x7 i4) */
Sprite dMNCharacters_SamusSpecialLwName = {
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
	(Bitmap*)dMNCharacters_SamusSpecialLwName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
