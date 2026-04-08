/* Sprite: Donkey */

Gfx dCharacterNames_Donkey_dl[] = { gsSPEndDisplayList() };

/* Texture: Donkey (19(32)x12 i4) */
u8 dCharacterNames_Donkey_tex[] = {
    #include <CharacterNames/Donkey.i4.inc.c>
};

Bitmap dCharacterNames_Donkey_bitmaps[] = {
	{ 19, 32, 0, 0, dCharacterNames_Donkey_tex, 12, 0 },
};

/* Sprite: Donkey (19x12 i4) */
Sprite dCharacterNames_Donkey = {
	0, 0,
	19, 12,
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
	(Bitmap*)dCharacterNames_Donkey_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
