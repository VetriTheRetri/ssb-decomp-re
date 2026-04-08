/* Sprite: DonkeyName */

Gfx dMNCharacters_DonkeyName_dl[] = { gsSPEndDisplayList() };

/* Texture: DonkeyName (92(96)x77 i4c, 2 tiles) */
u8 dMNCharacters_DonkeyName_tex[] = {
    #include <MNCharacters/DonkeyName.i4c.inc.c>
};

Bitmap dMNCharacters_DonkeyName_bitmaps[] = {
	{ 92, 96, 0, 0, dMNCharacters_DonkeyName_tex, 70, 0 },
	{ 92, 96, 0, 0, dMNCharacters_DonkeyName_tex + 0xD28, 7, 0 },
};

/* Sprite: DonkeyName (92x77 i4c) */
Sprite dMNCharacters_DonkeyName = {
	0, 0,
	92, 77,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	70, 70,
	4, 4,
	(Bitmap*)dMNCharacters_DonkeyName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
