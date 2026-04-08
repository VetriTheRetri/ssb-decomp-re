/* Sprite: HeartText2 */

Gfx dRelocFile29_HeartText2_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartText2 (36(40)x16 ia8) */
u8 dRelocFile29_HeartText2_tex[] = {
    #include <file_29/HeartText2.ia8.inc.c>
};

Bitmap dRelocFile29_HeartText2_bitmaps[] = {
	{ 36, 40, 0, 0, dRelocFile29_HeartText2_tex, 16, 0 },
};

/* Sprite: HeartText2 (36x16 ia8) */
Sprite dRelocFile29_HeartText2 = {
	0, 0,
	36, 16,
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
	(Bitmap*)dRelocFile29_HeartText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
