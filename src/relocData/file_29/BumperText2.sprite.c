/* Sprite: BumperText2 */

Gfx dRelocFile29_BumperText2_dl[] = { gsSPEndDisplayList() };

/* Texture: BumperText2 (51(56)x16 ia8) */
u8 dRelocFile29_BumperText2_tex[] = {
    #include <file_29/BumperText2.ia8.inc.c>
};

Bitmap dRelocFile29_BumperText2_bitmaps[] = {
	{ 51, 56, 0, 0, dRelocFile29_BumperText2_tex, 16, 0 },
};

/* Sprite: BumperText2 (51x16 ia8) */
Sprite dRelocFile29_BumperText2 = {
	0, 0,
	51, 16,
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
	(Bitmap*)dRelocFile29_BumperText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
