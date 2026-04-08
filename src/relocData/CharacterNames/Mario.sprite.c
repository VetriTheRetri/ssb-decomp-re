/* Sprite: Mario */

Gfx dCharacterNames_Mario_dl[] = { gsSPEndDisplayList() };

/* Texture: Mario (35(48)x12 i4) */
u8 dCharacterNames_Mario_tex[] = {
    #include <CharacterNames/Mario.i4.inc.c>
};

Bitmap dCharacterNames_Mario_bitmaps[] = {
	{ 35, 48, 0, 0, dCharacterNames_Mario_tex, 12, 0 },
};

/* Sprite: Mario (35x12 i4) */
Sprite dCharacterNames_Mario = {
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
	(Bitmap*)dCharacterNames_Mario_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
