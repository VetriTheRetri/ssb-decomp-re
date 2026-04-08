/* Sprite: NoneText */

Gfx dRelocFile29_NoneText_dl[] = { gsSPEndDisplayList() };

/* Texture: NoneText (31(32)x16 ia8) */
u8 dRelocFile29_NoneText_tex[] = {
    #include <file_29/NoneText.ia8.inc.c>
};

Bitmap dRelocFile29_NoneText_bitmaps[] = {
	{ 31, 32, 0, 0, dRelocFile29_NoneText_tex, 16, 0 },
};

/* Sprite: NoneText (31x16 ia8) */
Sprite dRelocFile29_NoneText = {
	0, 0,
	31, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_NoneText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
