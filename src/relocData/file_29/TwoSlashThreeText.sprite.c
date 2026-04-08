/* Sprite: TwoSlashThreeText */

Gfx dRelocFile29_TwoSlashThreeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TwoSlashThreeText (26(32)x16 ia8) */
u8 dRelocFile29_TwoSlashThreeText_tex[] = {
    #include <file_29/TwoSlashThreeText.ia8.inc.c>
};

Bitmap dRelocFile29_TwoSlashThreeText_bitmaps[] = {
	{ 26, 32, 0, 0, dRelocFile29_TwoSlashThreeText_tex, 16, 0 },
};

/* Sprite: TwoSlashThreeText (26x16 ia8) */
Sprite dRelocFile29_TwoSlashThreeText = {
	0, 0,
	26, 16,
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
	(Bitmap*)dRelocFile29_TwoSlashThreeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
