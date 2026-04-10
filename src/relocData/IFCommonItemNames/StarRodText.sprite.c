/* Sprite: StarRodText */

Gfx dIFCommonItemNames_StarRodText_dl[] = { gsSPEndDisplayList() };

/* Texture: StarRodText (57(64)x16 ia8) */
u8 dIFCommonItemNames_StarRodText_tex[] = {
    #include <IFCommonItemNames/StarRodText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_StarRodText_bitmaps[] = {
	{ 57, 64, 0, 0, dIFCommonItemNames_StarRodText_tex, 16, 0 },
};

/* Sprite: StarRodText (57x16 ia8) */
Sprite dIFCommonItemNames_StarRodText = {
	0, 0,
	57, 16,
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
	(Bitmap*)dIFCommonItemNames_StarRodText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
