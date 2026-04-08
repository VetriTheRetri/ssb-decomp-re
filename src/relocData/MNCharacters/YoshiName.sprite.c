/* Sprite: YoshiName */

Gfx dMNCharacters_YoshiName_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiName (64x40 i4c) */
u8 dMNCharacters_YoshiName_tex[] = {
    #include <MNCharacters/YoshiName.i4c.inc.c>
};

Bitmap dMNCharacters_YoshiName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_YoshiName_tex, 40, 0 },
};

/* Sprite: YoshiName (64x40 i4c) */
Sprite dMNCharacters_YoshiName = {
	0, 0,
	64, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	4, 4,
	(Bitmap*)dMNCharacters_YoshiName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
