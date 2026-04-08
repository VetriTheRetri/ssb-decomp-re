/* Sprite: NearTextJap */

Gfx dRelocFile29_NearTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NearTextJap (22(32)x12 i4) */
u8 dRelocFile29_NearTextJap_tex[] = {
    #include <file_29/NearTextJap.i4.inc.c>
};

Bitmap dRelocFile29_NearTextJap_bitmaps[] = {
	{ 22, 32, 0, 0, dRelocFile29_NearTextJap_tex, 12, 0 },
};

/* Sprite: NearTextJap (22x12 i4) */
Sprite dRelocFile29_NearTextJap = {
	0, 0,
	22, 12,
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
	(Bitmap*)dRelocFile29_NearTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
