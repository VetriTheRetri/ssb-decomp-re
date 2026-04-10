/* Sprite: StarRodTextJap */

Gfx dIFCommonItemNames_StarRodTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StarRodTextJap (66(80)x12 i4) */
u8 dIFCommonItemNames_StarRodTextJap_tex[] = {
    #include <IFCommonItemNames/StarRodTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_StarRodTextJap_bitmaps[] = {
	{ 66, 80, 0, 0, dIFCommonItemNames_StarRodTextJap_tex, 12, 0 },
};

/* Sprite: StarRodTextJap (66x12 i4) */
Sprite dIFCommonItemNames_StarRodTextJap = {
	0, 0,
	66, 12,
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
	(Bitmap*)dIFCommonItemNames_StarRodTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
