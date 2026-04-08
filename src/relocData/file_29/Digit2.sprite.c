/* Sprite: Digit2 */

Gfx dRelocFile29_Digit2_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit2 (9(16)x16 ia8) */
u8 dRelocFile29_Digit2_tex[] = {
    #include <file_29/Digit2.ia8.inc.c>
};

Bitmap dRelocFile29_Digit2_bitmaps[] = {
	{ 9, 16, 0, 0, dRelocFile29_Digit2_tex, 16, 0 },
};

/* Sprite: Digit2 (9x16 ia8) */
Sprite dRelocFile29_Digit2 = {
	0, 0,
	9, 16,
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
	(Bitmap*)dRelocFile29_Digit2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
