/* Sprite: Digit4 */

Gfx dRelocFile29_Digit4_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit4 (9(16)x16 ia8) */
u8 dRelocFile29_Digit4_tex[] = {
    #include <file_29/Digit4.ia8.inc.c>
};

Bitmap dRelocFile29_Digit4_bitmaps[] = {
	{ 9, 16, 0, 0, dRelocFile29_Digit4_tex, 16, 0 },
};

/* Sprite: Digit4 (9x16 ia8) */
Sprite dRelocFile29_Digit4 = {
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
	(Bitmap*)dRelocFile29_Digit4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
