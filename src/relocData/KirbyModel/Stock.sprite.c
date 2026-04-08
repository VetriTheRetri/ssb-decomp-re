/* Sprite: Stock */

/* Texture: Stock (8(16)x10 ci4) */
u8 dKirbyModel_Stock_tex[] = {
    #include <KirbyModel/Stock.ci4.inc.c>
};

Bitmap dKirbyModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dKirbyModel_Stock_tex, 10, 0 },
};

/* Sprite: Stock (8x10 ci4) */
Sprite dKirbyModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x75857544,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dKirbyModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
