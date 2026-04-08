/* Sprite: Luigi */

Gfx dCharacterNames_Luigi_dl[] = { gsSPEndDisplayList() };

/* Texture: Luigi (29(32)x12 i4) */
u8 dCharacterNames_Luigi_tex[] = {
    #include <CharacterNames/Luigi.i4.inc.c>
};

Bitmap dCharacterNames_Luigi_bitmaps[] = {
	{ 29, 32, 0, 0, dCharacterNames_Luigi_tex, 12, 0 },
};

/* Sprite: Luigi (29x12 i4) */
Sprite dCharacterNames_Luigi = {
	0, 0,
	29, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dCharacterNames_Luigi_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
