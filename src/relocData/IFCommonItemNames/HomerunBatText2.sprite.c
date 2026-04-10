/* Sprite: HomerunBatText2 */

Gfx dIFCommonItemNames_HomerunBatText2_dl[] = { gsSPEndDisplayList() };

/* Texture: HomerunBatText2 (80x15 ia8) */
u8 dIFCommonItemNames_HomerunBatText2_tex[] = {
    #include <IFCommonItemNames/HomerunBatText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_HomerunBatText2_bitmaps[] = {
	{ 80, 80, 0, 0, dIFCommonItemNames_HomerunBatText2_tex, 15, 0 },
};

/* Sprite: HomerunBatText2 (80x15 ia8) */
Sprite dIFCommonItemNames_HomerunBatText2 = {
	0, 0,
	80, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dIFCommonItemNames_HomerunBatText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
