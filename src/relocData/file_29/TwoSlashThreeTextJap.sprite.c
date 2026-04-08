/* Sprite: TwoSlashThreeTextJap */

Gfx dRelocFile29_TwoSlashThreeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TwoSlashThreeTextJap (29(32)x12 i4) */
u8 dRelocFile29_TwoSlashThreeTextJap_tex[] = {
    #include <file_29/TwoSlashThreeTextJap.i4.inc.c>
};

Bitmap dRelocFile29_TwoSlashThreeTextJap_bitmaps[] = {
	{ 29, 32, 0, 0, dRelocFile29_TwoSlashThreeTextJap_tex, 12, 0 },
};

/* Sprite: TwoSlashThreeTextJap (29x12 i4) */
Sprite dRelocFile29_TwoSlashThreeTextJap = {
	0, 0,
	29, 12,
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
	(Bitmap*)dRelocFile29_TwoSlashThreeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
