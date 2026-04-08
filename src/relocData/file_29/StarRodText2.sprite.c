/* Sprite: StarRodText2 */

Gfx dRelocFile29_StarRodText2_dl[] = { gsSPEndDisplayList() };

/* Texture: StarRodText2 (50(56)x16 ia8) */
u8 dRelocFile29_StarRodText2_tex[] = {
    #include <file_29/StarRodText2.ia8.inc.c>
};

Bitmap dRelocFile29_StarRodText2_bitmaps[] = {
	{ 50, 56, 0, 0, dRelocFile29_StarRodText2_tex, 16, 0 },
};

/* Sprite: StarRodText2 (50x16 ia8) */
Sprite dRelocFile29_StarRodText2 = {
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
	(Bitmap*)dRelocFile29_StarRodText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
