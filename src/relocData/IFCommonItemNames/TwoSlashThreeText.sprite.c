/* Sprite: TwoSlashThreeText */

Gfx dIFCommonItemNames_TwoSlashThreeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TwoSlashThreeText (26(32)x16 ia8) */
u8 dIFCommonItemNames_TwoSlashThreeText_tex[] = {
    #include <IFCommonItemNames/TwoSlashThreeText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_TwoSlashThreeText_bitmaps[] = {
	{ 26, 32, 0, 0, dIFCommonItemNames_TwoSlashThreeText_tex, 16, 0 },
};

/* Sprite: TwoSlashThreeText (26x16 ia8) */
Sprite dIFCommonItemNames_TwoSlashThreeText = {
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
	(Bitmap*)dIFCommonItemNames_TwoSlashThreeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
