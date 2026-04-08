/* Sprite: HeartText */

Gfx dRelocFile29_HeartText_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartText (37(40)x16 ia8) */
u8 dRelocFile29_HeartText_tex[] = {
    #include <file_29/HeartText.ia8.inc.c>
};

Bitmap dRelocFile29_HeartText_bitmaps[] = {
	{ 37, 40, 0, 0, dRelocFile29_HeartText_tex, 16, 0 },
};

/* Sprite: HeartText (37x16 ia8) */
Sprite dRelocFile29_HeartText = {
	0, 0,
	37, 16,
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
	(Bitmap*)dRelocFile29_HeartText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
