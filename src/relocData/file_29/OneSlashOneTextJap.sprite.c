/* Sprite: OneSlashOneTextJap */

Gfx dRelocFile29_OneSlashOneTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashOneTextJap (26(32)x12 i4) */
u8 dRelocFile29_OneSlashOneTextJap_tex[] = {
    #include <file_29/OneSlashOneTextJap.i4.inc.c>
};

Bitmap dRelocFile29_OneSlashOneTextJap_bitmaps[] = {
	{ 26, 32, 0, 0, dRelocFile29_OneSlashOneTextJap_tex, 12, 0 },
};

/* Sprite: OneSlashOneTextJap (26x12 i4) */
Sprite dRelocFile29_OneSlashOneTextJap = {
	0, 0,
	26, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dRelocFile29_OneSlashOneTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
