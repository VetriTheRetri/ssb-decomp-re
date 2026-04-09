/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dPikachuModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dPikachuModel_Stock_tex, 10, 0 },
};

Sprite dPikachuModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dPikachuModel_palette_0x9930,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dPikachuModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
