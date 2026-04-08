/* Sprite: Ness */

Gfx dCharacterNames_Ness_dl[] = { gsSPEndDisplayList() };

/* Texture: Ness (30(32)x12 i4) */
u8 dCharacterNames_Ness_tex[] = {
    #include <CharacterNames/Ness.i4.inc.c>
};

Bitmap dCharacterNames_Ness_bitmaps[] = {
	{ 30, 32, 0, 0, dCharacterNames_Ness_tex, 12, 0 },
};

/* Sprite: Ness (30x12 i4) */
Sprite dCharacterNames_Ness = {
	0, 0,
	30, 12,
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
	(Bitmap*)dCharacterNames_Ness_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
