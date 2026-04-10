/* Sprite: PercentageSign */

Gfx dIFCommonItemNames_PercentageSign_dl[] = { gsSPEndDisplayList() };

/* Texture: PercentageSign (14(16)x16 ia8) */
u8 dIFCommonItemNames_PercentageSign_tex[] = {
    #include <IFCommonItemNames/PercentageSign.ia8.inc.c>
};

Bitmap dIFCommonItemNames_PercentageSign_bitmaps[] = {
	{ 14, 16, 0, 0, dIFCommonItemNames_PercentageSign_tex, 16, 0 },
};

/* Sprite: PercentageSign (14x16 ia8) */
Sprite dIFCommonItemNames_PercentageSign = {
	0, 0,
	14, 16,
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
	(Bitmap*)dIFCommonItemNames_PercentageSign_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
