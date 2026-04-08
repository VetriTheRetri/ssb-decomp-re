/* Sprite: OneSlashFourText */

Gfx dRelocFile29_OneSlashFourText_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashFourText (23(24)x16 ia8) */
u8 dRelocFile29_OneSlashFourText_tex[] = {
    #include <file_29/OneSlashFourText.ia8.inc.c>
};

Bitmap dRelocFile29_OneSlashFourText_bitmaps[] = {
	{ 23, 24, 0, 0, dRelocFile29_OneSlashFourText_tex, 16, 0 },
};

/* Sprite: OneSlashFourText (23x16 ia8) */
Sprite dRelocFile29_OneSlashFourText = {
	0, 0,
	23, 16,
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
	(Bitmap*)dRelocFile29_OneSlashFourText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
