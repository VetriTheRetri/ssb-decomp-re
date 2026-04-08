/* Sprite: StarText2 */

Gfx dRelocFile29_StarText2_dl[] = { gsSPEndDisplayList() };

/* Texture: StarText2 (28(32)x16 ia8) */
u8 dRelocFile29_StarText2_tex[] = {
    #include <file_29/StarText2.ia8.inc.c>
};

Bitmap dRelocFile29_StarText2_bitmaps[] = {
	{ 28, 32, 0, 0, dRelocFile29_StarText2_tex, 16, 0 },
};

/* Sprite: StarText2 (28x16 ia8) */
Sprite dRelocFile29_StarText2 = {
	0, 0,
	28, 16,
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
	(Bitmap*)dRelocFile29_StarText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
