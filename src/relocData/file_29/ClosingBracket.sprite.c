/* Sprite: ClosingBracket */

Gfx dRelocFile29_ClosingBracket_dl[] = { gsSPEndDisplayList() };

/* Texture: ClosingBracket (8x16 ia8) */
u8 dRelocFile29_ClosingBracket_tex[] = {
    #include <file_29/ClosingBracket.ia8.inc.c>
};

Bitmap dRelocFile29_ClosingBracket_bitmaps[] = {
	{ 8, 8, 0, 0, dRelocFile29_ClosingBracket_tex, 16, 0 },
};

/* Sprite: ClosingBracket (8x16 ia8) */
Sprite dRelocFile29_ClosingBracket = {
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
	(Bitmap*)dRelocFile29_ClosingBracket_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
