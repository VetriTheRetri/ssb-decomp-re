/* Sprite: StarRodText2 */

Gfx dIFCommonItemNames_StarRodText2_dl[] = { gsSPEndDisplayList() };

/* Texture: StarRodText2 (50(56)x16 ia8) */
u8 dIFCommonItemNames_StarRodText2_tex[] = {
    #include <IFCommonItemNames/StarRodText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_StarRodText2_bitmaps[] = {
	{ 50, 56, 0, 0, dIFCommonItemNames_StarRodText2_tex, 16, 0 },
};

/* Sprite: StarRodText2 (50x16 ia8) */
Sprite dIFCommonItemNames_StarRodText2 = {
	0, 0,
	50, 16,
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
	(Bitmap*)dIFCommonItemNames_StarRodText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
