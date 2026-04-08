/* Sprite: StarTextJap */

Gfx dRelocFile29_StarTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StarTextJap (34(48)x12 i4) */
u8 dRelocFile29_StarTextJap_tex[] = {
    #include <file_29/StarTextJap.i4.inc.c>
};

Bitmap dRelocFile29_StarTextJap_bitmaps[] = {
	{ 34, 48, 0, 0, dRelocFile29_StarTextJap_tex, 12, 0 },
};

/* Sprite: StarTextJap (34x12 i4) */
Sprite dRelocFile29_StarTextJap = {
	0, 0,
	34, 12,
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
	(Bitmap*)dRelocFile29_StarTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
