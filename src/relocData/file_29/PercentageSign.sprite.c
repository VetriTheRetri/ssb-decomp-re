/* Sprite: PercentageSign */

Gfx dRelocFile29_PercentageSign_dl[] = { gsSPEndDisplayList() };

/* Texture: PercentageSign (14(16)x16 ia8) */
u8 dRelocFile29_PercentageSign_tex[] = {
    #include <file_29/PercentageSign.ia8.inc.c>
};

Bitmap dRelocFile29_PercentageSign_bitmaps[] = {
	{ 14, 16, 0, 0, dRelocFile29_PercentageSign_tex, 16, 0 },
};

/* Sprite: PercentageSign (14x16 ia8) */
Sprite dRelocFile29_PercentageSign = {
	0, 0,
	14, 16,
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
	(Bitmap*)dRelocFile29_PercentageSign_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
