/* Sprite: HeartTextJap */

Gfx dRelocFile29_HeartTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartTextJap (73(80)x12 i4) */
u8 dRelocFile29_HeartTextJap_tex[] = {
    #include <file_29/HeartTextJap.i4.inc.c>
};

Bitmap dRelocFile29_HeartTextJap_bitmaps[] = {
	{ 73, 80, 0, 0, dRelocFile29_HeartTextJap_tex, 12, 0 },
};

/* Sprite: HeartTextJap (73x12 i4) */
Sprite dRelocFile29_HeartTextJap = {
	0, 0,
	73, 12,
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
	(Bitmap*)dRelocFile29_HeartTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
