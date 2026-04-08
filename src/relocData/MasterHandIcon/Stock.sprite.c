/* Sprite: Stock */

/* Texture: Stock (16x16 ci4) */
u8 dMasterHandIcon_Stock_tex[] = {
    #include <MasterHandIcon/Stock.ci4.inc.c>
};

Bitmap dMasterHandIcon_Stock_bitmaps[] = {
	{ 16, 16, 0, 0, dMasterHandIcon_Stock_tex, 16, 0 },
};

/* Sprite: Stock (16x16 ci4) */
Sprite dMasterHandIcon_Stock = {
	0, 0,
	16, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x003D0024,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dMasterHandIcon_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
