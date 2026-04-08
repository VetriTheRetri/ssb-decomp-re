/* Sprite: HammerText2 */

Gfx dRelocFile29_HammerText2_dl[] = { gsSPEndDisplayList() };

/* Texture: HammerText2 (54(56)x16 ia8) */
u8 dRelocFile29_HammerText2_tex[] = {
    #include <file_29/HammerText2.ia8.inc.c>
};

Bitmap dRelocFile29_HammerText2_bitmaps[] = {
	{ 54, 56, 0, 0, dRelocFile29_HammerText2_tex, 16, 0 },
};

/* Sprite: HammerText2 (54x16 ia8) */
Sprite dRelocFile29_HammerText2 = {
	0, 0,
	54, 16,
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
	(Bitmap*)dRelocFile29_HammerText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
