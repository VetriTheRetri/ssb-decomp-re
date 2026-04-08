/* Sprite: HomerunBatText */

Gfx dRelocFile29_HomerunBatText_dl[] = { gsSPEndDisplayList() };

/* Texture: HomerunBatText (80x16 ia8) */
u8 dRelocFile29_HomerunBatText_tex[] = {
    #include <file_29/HomerunBatText.ia8.inc.c>
};

Bitmap dRelocFile29_HomerunBatText_bitmaps[] = {
	{ 80, 80, 0, 0, dRelocFile29_HomerunBatText_tex, 16, 0 },
};

/* Sprite: HomerunBatText (80x16 ia8) */
Sprite dRelocFile29_HomerunBatText = {
	0, 0,
	80, 16,
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
	(Bitmap*)dRelocFile29_HomerunBatText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
