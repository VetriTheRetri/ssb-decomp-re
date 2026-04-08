/* Sprite: Fox */

Gfx dCharacterNames_Fox_dl[] = { gsSPEndDisplayList() };

/* Texture: Fox (23(32)x12 i4) */
u8 dCharacterNames_Fox_tex[] = {
    #include <CharacterNames/Fox.i4.inc.c>
};

Bitmap dCharacterNames_Fox_bitmaps[] = {
	{ 23, 32, 0, 0, dCharacterNames_Fox_tex, 12, 0 },
};

/* Sprite: Fox (23x12 i4) */
Sprite dCharacterNames_Fox = {
	0, 0,
	23, 12,
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
	(Bitmap*)dCharacterNames_Fox_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
