/* Sprite: 0x3028 */

Gfx dSC1PStageClear1_0x3028_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x3028 (69(72)x16 ia8) */
u8 dSC1PStageClear1_0x3028_tex[] = {
    #include <SC1PStageClear1/0x3028.ia8.inc.c>
};

Bitmap dSC1PStageClear1_0x3028_bitmaps[] = {
	{ 69, 72, 0, 0, dSC1PStageClear1_0x3028_tex, 16, 0 },
};

/* Sprite: 0x3028 (69x16 ia8) */
Sprite dSC1PStageClear1_0x3028 = {
	0, 0,
	69, 16,
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
	(Bitmap*)dSC1PStageClear1_0x3028_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
