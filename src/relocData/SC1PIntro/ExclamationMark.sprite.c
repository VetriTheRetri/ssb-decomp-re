/* Sprite: ExclamationMark */

/* Sprite: ExclamationMark (8x16 ci4) */

Bitmap dSC1PIntro_ExclamationMark_bitmaps[] = {
	{ 8, 16, 0, 0, dSC1PIntro_ExclamationMark_tex, 16, 0 },
};

Sprite dSC1PIntro_ExclamationMark = {
	0, 0,
	8, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7D30,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dSC1PIntro_ExclamationMark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
