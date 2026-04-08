/* Sprite: Pikachu */

Gfx dCharacterNames_Pikachu_dl[] = { gsSPEndDisplayList() };

/* Texture: Pikachu (48x12 i4) */
u8 dCharacterNames_Pikachu_tex[] = {
    #include <CharacterNames/Pikachu.i4.inc.c>
};

Bitmap dCharacterNames_Pikachu_bitmaps[] = {
	{ 48, 48, 0, 0, dCharacterNames_Pikachu_tex, 12, 0 },
};

/* Sprite: Pikachu (48x12 i4) */
Sprite dCharacterNames_Pikachu = {
	0, 0,
	48, 12,
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
	(Bitmap*)dCharacterNames_Pikachu_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
