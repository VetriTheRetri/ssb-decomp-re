/* Sprite: TwoSlashThreeText2 */

Gfx dRelocFile29_TwoSlashThreeText2_dl[] = { gsSPEndDisplayList() };

/* Texture: TwoSlashThreeText2 (22(24)x16 ia8) */
u8 dRelocFile29_TwoSlashThreeText2_tex[] = {
    #include <file_29/TwoSlashThreeText2.ia8.inc.c>
};

Bitmap dRelocFile29_TwoSlashThreeText2_bitmaps[] = {
	{ 22, 24, 0, 0, dRelocFile29_TwoSlashThreeText2_tex, 16, 0 },
};

/* Sprite: TwoSlashThreeText2 (22x16 ia8) */
Sprite dRelocFile29_TwoSlashThreeText2 = {
	0, 0,
	22, 16,
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
	(Bitmap*)dRelocFile29_TwoSlashThreeText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
