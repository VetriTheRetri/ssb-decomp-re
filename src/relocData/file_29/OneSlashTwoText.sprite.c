/* Sprite: OneSlashTwoText */

Gfx dRelocFile29_OneSlashTwoText_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashTwoText (22(24)x16 ia8) */
u8 dRelocFile29_OneSlashTwoText_tex[] = {
    #include <file_29/OneSlashTwoText.ia8.inc.c>
};

Bitmap dRelocFile29_OneSlashTwoText_bitmaps[] = {
	{ 22, 24, 0, 0, dRelocFile29_OneSlashTwoText_tex, 16, 0 },
};

/* Sprite: OneSlashTwoText (22x16 ia8) */
Sprite dRelocFile29_OneSlashTwoText = {
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
	(Bitmap*)dRelocFile29_OneSlashTwoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
