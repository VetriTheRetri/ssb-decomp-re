/* Sprite: HeartTextJap */

Gfx dIFCommonItemNames_HeartTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartTextJap (73(80)x12 i4) */
u8 dIFCommonItemNames_HeartTextJap_tex[] = {
    #include <IFCommonItemNames/HeartTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_HeartTextJap_bitmaps[] = {
	{ 73, 80, 0, 0, dIFCommonItemNames_HeartTextJap_tex, 12, 0 },
};

/* Sprite: HeartTextJap (73x12 i4) */
Sprite dIFCommonItemNames_HeartTextJap = {
	0, 0,
	73, 12,
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
	(Bitmap*)dIFCommonItemNames_HeartTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
