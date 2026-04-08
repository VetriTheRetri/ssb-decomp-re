/* Sprite: DonkeySpecialLwName */

Gfx dMNCharacters_DonkeySpecialLwName_dl[] = { gsSPEndDisplayList() };

/* Texture: DonkeySpecialLwName (64x7 i4) */
u8 dMNCharacters_DonkeySpecialLwName_tex[] = {
    #include <MNCharacters/DonkeySpecialLwName.i4.inc.c>
};

Bitmap dMNCharacters_DonkeySpecialLwName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_DonkeySpecialLwName_tex, 7, 0 },
};

/* Sprite: DonkeySpecialLwName (64x7 i4) */
Sprite dMNCharacters_DonkeySpecialLwName = {
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
	(Bitmap*)dMNCharacters_DonkeySpecialLwName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
