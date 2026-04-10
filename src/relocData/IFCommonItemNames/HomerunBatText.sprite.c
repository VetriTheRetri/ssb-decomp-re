/* Sprite: HomerunBatText */

Gfx dIFCommonItemNames_HomerunBatText_dl[] = { gsSPEndDisplayList() };

/* Texture: HomerunBatText (80x16 ia8) */
u8 dIFCommonItemNames_HomerunBatText_tex[] = {
    #include <IFCommonItemNames/HomerunBatText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_HomerunBatText_bitmaps[] = {
	{ 80, 80, 0, 0, dIFCommonItemNames_HomerunBatText_tex, 16, 0 },
};

/* Sprite: HomerunBatText (80x16 ia8) */
Sprite dIFCommonItemNames_HomerunBatText = {
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
	(Bitmap*)dIFCommonItemNames_HomerunBatText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
