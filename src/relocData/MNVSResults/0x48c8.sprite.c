/* Sprite: 0x48c8 */

Gfx dMNVSResults_0x48c8_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x48c8 (124(128)x110 ia8, 7 tiles) */
u8 dMNVSResults_0x48c8_tex[] = {
    #include <MNVSResults/0x48c8.ia8.inc.c>
};

Bitmap dMNVSResults_0x48c8_bitmaps[] = {
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x808, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x1010, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x1818, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x2020, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x2828, 16, 0 },
	{ 124, 128, 0, 0, dMNVSResults_0x48c8_tex + 0x3030, 14, 0 },
};

/* Sprite: 0x48c8 (124x110 ia8) */
Sprite dMNVSResults_0x48c8 = {
	0, 0,
	124, 110,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	7, 108,
	16, 16,
	3, 1,
	(Bitmap*)dMNVSResults_0x48c8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
