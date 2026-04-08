/* Sprite: OneSlashTwoTextJap */

Gfx dRelocFile29_OneSlashTwoTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashTwoTextJap (27(32)x12 i4) */
u8 dRelocFile29_OneSlashTwoTextJap_tex[] = {
    #include <file_29/OneSlashTwoTextJap.i4.inc.c>
};

Bitmap dRelocFile29_OneSlashTwoTextJap_bitmaps[] = {
	{ 27, 32, 0, 0, dRelocFile29_OneSlashTwoTextJap_tex, 12, 0 },
};

/* Sprite: OneSlashTwoTextJap (27x12 i4) */
Sprite dRelocFile29_OneSlashTwoTextJap = {
	0, 0,
	27, 12,
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
	(Bitmap*)dRelocFile29_OneSlashTwoTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
