/* Sprite: Captain */

Gfx dCharacterNames_Captain_dl[] = { gsSPEndDisplayList() };

/* Texture: Captain (53(64)x12 i4) */
u8 dCharacterNames_Captain_tex[] = {
    #include <CharacterNames/Captain.i4.inc.c>
};

Bitmap dCharacterNames_Captain_bitmaps[] = {
	{ 53, 64, 0, 0, dCharacterNames_Captain_tex, 12, 0 },
};

/* Sprite: Captain (53x12 i4) */
Sprite dCharacterNames_Captain = {
	0, 0,
	53, 12,
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
	(Bitmap*)dCharacterNames_Captain_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
