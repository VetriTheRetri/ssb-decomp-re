/* Sprite: OneSlashTwoText2 */

Gfx dRelocFile29_OneSlashTwoText2_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashTwoText2 (22(24)x16 ia8) */
u8 dRelocFile29_OneSlashTwoText2_tex[] = {
    #include <file_29/OneSlashTwoText2.ia8.inc.c>
};

Bitmap dRelocFile29_OneSlashTwoText2_bitmaps[] = {
	{ 22, 24, 0, 0, dRelocFile29_OneSlashTwoText2_tex, 16, 0 },
};

/* Sprite: OneSlashTwoText2 (22x16 ia8) */
Sprite dRelocFile29_OneSlashTwoText2 = {
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
	(Bitmap*)dRelocFile29_OneSlashTwoText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
