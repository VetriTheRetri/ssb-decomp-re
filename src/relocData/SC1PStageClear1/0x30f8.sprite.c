/* Sprite: 0x30f8 */

Gfx dSC1PStageClear1_0x30f8_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x30f8 (6(16)x14 i4) */
u8 dSC1PStageClear1_0x30f8_tex[] = {
    #include <SC1PStageClear1/0x30f8.i4.inc.c>
};

Bitmap dSC1PStageClear1_0x30f8_bitmaps[] = {
	{ 6, 16, 0, 0, dSC1PStageClear1_0x30f8_tex, 14, 0 },
};

/* Sprite: 0x30f8 (6x14 i4) */
Sprite dSC1PStageClear1_0x30f8 = {
	0, 0,
	6, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSC1PStageClear1_0x30f8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
