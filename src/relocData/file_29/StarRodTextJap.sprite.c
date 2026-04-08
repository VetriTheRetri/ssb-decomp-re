/* Sprite: StarRodTextJap */

Gfx dRelocFile29_StarRodTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StarRodTextJap (66(80)x12 i4) */
u8 dRelocFile29_StarRodTextJap_tex[] = {
    #include <file_29/StarRodTextJap.i4.inc.c>
};

Bitmap dRelocFile29_StarRodTextJap_bitmaps[] = {
	{ 66, 80, 0, 0, dRelocFile29_StarRodTextJap_tex, 12, 0 },
};

/* Sprite: StarRodTextJap (66x12 i4) */
Sprite dRelocFile29_StarRodTextJap = {
	0, 0,
	66, 12,
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
	(Bitmap*)dRelocFile29_StarRodTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
