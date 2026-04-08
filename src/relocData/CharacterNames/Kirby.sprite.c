/* Sprite: Kirby */

Gfx dCharacterNames_Kirby_dl[] = { gsSPEndDisplayList() };

/* Texture: Kirby (35(48)x12 i4) */
u8 dCharacterNames_Kirby_tex[] = {
    #include <CharacterNames/Kirby.i4.inc.c>
};

Bitmap dCharacterNames_Kirby_bitmaps[] = {
	{ 35, 48, 0, 0, dCharacterNames_Kirby_tex, 12, 0 },
};

/* Sprite: Kirby (35x12 i4) */
Sprite dCharacterNames_Kirby = {
	0, 0,
	35, 12,
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
	(Bitmap*)dCharacterNames_Kirby_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
