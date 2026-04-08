/* Sprite: StockTextJap */

Gfx dMNVSMode_StockTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StockTextJap (56x15 ia8) */
u8 dMNVSMode_StockTextJap_tex[] = {
    #include <MNVSMode/StockTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_StockTextJap_bitmaps[] = {
	{ 56, 56, 0, 0, dMNVSMode_StockTextJap_tex, 15, 0 },
};

/* Sprite: StockTextJap (56x15 ia8) */
Sprite dMNVSMode_StockTextJap = {
	0, 0,
	56, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSMode_StockTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
