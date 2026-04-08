/* Sprite: DonkeyWorks */

Gfx dMNCharacters_DonkeyWorks_dl[] = { gsSPEndDisplayList() };

/* Texture: DonkeyWorks (152(160)x32 i4) */
u8 dMNCharacters_DonkeyWorks_tex[] = {
    #include <MNCharacters/DonkeyWorks.i4.inc.c>
};

Bitmap dMNCharacters_DonkeyWorks_bitmaps[] = {
	{ 152, 160, 0, 0, dMNCharacters_DonkeyWorks_tex, 32, 0 },
};

/* Sprite: DonkeyWorks (152x32 i4) */
Sprite dMNCharacters_DonkeyWorks = {
	0, 0,
	152, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dMNCharacters_DonkeyWorks_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
