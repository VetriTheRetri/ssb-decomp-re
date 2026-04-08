/* Sprite: OpeningBracket */

Gfx dRelocFile29_OpeningBracket_dl[] = { gsSPEndDisplayList() };

/* Texture: OpeningBracket (8x16 ia8) */
u8 dRelocFile29_OpeningBracket_tex[] = {
    #include <file_29/OpeningBracket.ia8.inc.c>
};

Bitmap dRelocFile29_OpeningBracket_bitmaps[] = {
	{ 8, 8, 0, 0, dRelocFile29_OpeningBracket_tex, 16, 0 },
};

/* Sprite: OpeningBracket (8x16 ia8) */
Sprite dRelocFile29_OpeningBracket = {
	0, 0,
	8, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_OpeningBracket_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
