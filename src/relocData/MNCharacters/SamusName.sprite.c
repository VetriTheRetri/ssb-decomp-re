/* Sprite: SamusName */

Gfx dMNCharacters_SamusName_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusName (79(80)x39 i4c) */
u8 dMNCharacters_SamusName_tex[] = {
    #include <MNCharacters/SamusName.i4c.inc.c>
};

Bitmap dMNCharacters_SamusName_bitmaps[] = {
	{ 79, 80, 0, 0, dMNCharacters_SamusName_tex, 39, 0 },
};

/* Sprite: SamusName (79x39 i4c) */
Sprite dMNCharacters_SamusName = {
	0, 0,
	79, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	39, 39,
	4, 4,
	(Bitmap*)dMNCharacters_SamusName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
