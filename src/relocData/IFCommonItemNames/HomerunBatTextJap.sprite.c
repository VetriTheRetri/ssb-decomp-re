/* Sprite: HomerunBatTextJap */

Gfx dIFCommonItemNames_HomerunBatTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HomerunBatTextJap (77(80)x12 i4) */
u8 dIFCommonItemNames_HomerunBatTextJap_tex[] = {
    #include <IFCommonItemNames/HomerunBatTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_HomerunBatTextJap_bitmaps[] = {
	{ 77, 80, 0, 0, dIFCommonItemNames_HomerunBatTextJap_tex, 12, 0 },
};

/* Sprite: HomerunBatTextJap (77x12 i4) */
Sprite dIFCommonItemNames_HomerunBatTextJap = {
	0, 0,
	77, 12,
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
	(Bitmap*)dIFCommonItemNames_HomerunBatTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
