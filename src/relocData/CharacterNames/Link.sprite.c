/* Sprite: Link */

Gfx dCharacterNames_Link_dl[] = { gsSPEndDisplayList() };

/* Texture: Link (26(32)x12 i4) */
u8 dCharacterNames_Link_tex[] = {
    #include <CharacterNames/Link.i4.inc.c>
};

Bitmap dCharacterNames_Link_bitmaps[] = {
	{ 26, 32, 0, 0, dCharacterNames_Link_tex, 12, 0 },
};

/* Sprite: Link (26x12 i4) */
Sprite dCharacterNames_Link = {
	0, 0,
	26, 12,
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
	(Bitmap*)dCharacterNames_Link_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
