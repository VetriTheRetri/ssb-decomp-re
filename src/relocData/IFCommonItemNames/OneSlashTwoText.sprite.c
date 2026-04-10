/* Sprite: OneSlashTwoText */

Gfx dIFCommonItemNames_OneSlashTwoText_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashTwoText (22(24)x16 ia8) */
u8 dIFCommonItemNames_OneSlashTwoText_tex[] = {
    #include <IFCommonItemNames/OneSlashTwoText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_OneSlashTwoText_bitmaps[] = {
	{ 22, 24, 0, 0, dIFCommonItemNames_OneSlashTwoText_tex, 16, 0 },
};

/* Sprite: OneSlashTwoText (22x16 ia8) */
Sprite dIFCommonItemNames_OneSlashTwoText = {
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
	(Bitmap*)dIFCommonItemNames_OneSlashTwoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
