/* Sprite: Purin */

Gfx dCharacterNames_Purin_dl[] = { gsSPEndDisplayList() };

/* Texture: Purin (68(80)x12 i4) */
u8 dCharacterNames_Purin_tex[] = {
    #include <CharacterNames/Purin.i4.inc.c>
};

Bitmap dCharacterNames_Purin_bitmaps[] = {
	{ 68, 80, 0, 0, dCharacterNames_Purin_tex, 12, 0 },
};

/* Sprite: Purin (68x12 i4) */
Sprite dCharacterNames_Purin = {
	0, 0,
	68, 12,
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
	(Bitmap*)dCharacterNames_Purin_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
