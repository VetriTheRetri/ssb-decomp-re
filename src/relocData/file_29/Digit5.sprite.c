/* Sprite: Digit5 */

Gfx dRelocFile29_Digit5_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit5 (10(16)x16 ia8) */
u8 dRelocFile29_Digit5_tex[] = {
    #include <file_29/Digit5.ia8.inc.c>
};

Bitmap dRelocFile29_Digit5_bitmaps[] = {
	{ 10, 16, 0, 0, dRelocFile29_Digit5_tex, 16, 0 },
};

/* Sprite: Digit5 (10x16 ia8) */
Sprite dRelocFile29_Digit5 = {
	0, 0,
	10, 16,
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
	(Bitmap*)dRelocFile29_Digit5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
