/* Sprite: HammerText */

Gfx dRelocFile29_HammerText_dl[] = { gsSPEndDisplayList() };

/* Texture: HammerText (52(56)x16 ia8) */
u8 dRelocFile29_HammerText_tex[] = {
    #include <file_29/HammerText.ia8.inc.c>
};

Bitmap dRelocFile29_HammerText_bitmaps[] = {
	{ 52, 56, 0, 0, dRelocFile29_HammerText_tex, 16, 0 },
};

/* Sprite: HammerText (52x16 ia8) */
Sprite dRelocFile29_HammerText = {
	0, 0,
	52, 16,
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
	(Bitmap*)dRelocFile29_HammerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
