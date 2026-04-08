/* Sprite: NormalTextJap */

Gfx dRelocFile29_NormalTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NormalTextJap (32x12 i4) */
u8 dRelocFile29_NormalTextJap_tex[] = {
    #include <file_29/NormalTextJap.i4.inc.c>
};

Bitmap dRelocFile29_NormalTextJap_bitmaps[] = {
	{ 32, 32, 0, 0, dRelocFile29_NormalTextJap_tex, 12, 0 },
};

/* Sprite: NormalTextJap (32x12 i4) */
Sprite dRelocFile29_NormalTextJap = {
	0, 0,
	32, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dRelocFile29_NormalTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
