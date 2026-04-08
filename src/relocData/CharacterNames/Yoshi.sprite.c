/* Sprite: Yoshi */

Gfx dCharacterNames_Yoshi_dl[] = { gsSPEndDisplayList() };

/* Texture: Yoshi (32x12 i4) */
u8 dCharacterNames_Yoshi_tex[] = {
    #include <CharacterNames/Yoshi.i4.inc.c>
};

Bitmap dCharacterNames_Yoshi_bitmaps[] = {
	{ 32, 32, 0, 0, dCharacterNames_Yoshi_tex, 12, 0 },
};

/* Sprite: Yoshi (32x12 i4) */
Sprite dCharacterNames_Yoshi = {
	0, 0,
	32, 12,
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
	(Bitmap*)dCharacterNames_Yoshi_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
