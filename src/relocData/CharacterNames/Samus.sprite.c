/* Sprite: Samus */

Gfx dCharacterNames_Samus_dl[] = { gsSPEndDisplayList() };

/* Texture: Samus (40(48)x12 i4) */
u8 dCharacterNames_Samus_tex[] = {
    #include <CharacterNames/Samus.i4.inc.c>
};

Bitmap dCharacterNames_Samus_bitmaps[] = {
	{ 40, 48, 0, 0, dCharacterNames_Samus_tex, 12, 0 },
};

/* Sprite: Samus (40x12 i4) */
Sprite dCharacterNames_Samus = {
	0, 0,
	40, 12,
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
	(Bitmap*)dCharacterNames_Samus_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
