/* Sprite: PikachuName */

Gfx dMNCharacters_PikachuName_dl[] = { gsSPEndDisplayList() };

/* Texture: PikachuName (82(96)x40 i4c) */
u8 dMNCharacters_PikachuName_tex[] = {
    #include <MNCharacters/PikachuName.i4c.inc.c>
};

Bitmap dMNCharacters_PikachuName_bitmaps[] = {
	{ 82, 96, 0, 0, dMNCharacters_PikachuName_tex, 40, 0 },
};

/* Sprite: PikachuName (82x40 i4c) */
Sprite dMNCharacters_PikachuName = {
	0, 0,
	82, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	4, 4,
	(Bitmap*)dMNCharacters_PikachuName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
