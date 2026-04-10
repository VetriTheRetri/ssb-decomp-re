/* Sprite: StarTextJap */

Gfx dIFCommonItemNames_StarTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StarTextJap (34(48)x12 i4) */
u8 dIFCommonItemNames_StarTextJap_tex[] = {
    #include <IFCommonItemNames/StarTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_StarTextJap_bitmaps[] = {
	{ 34, 48, 0, 0, dIFCommonItemNames_StarTextJap_tex, 12, 0 },
};

/* Sprite: StarTextJap (34x12 i4) */
Sprite dIFCommonItemNames_StarTextJap = {
	0, 0,
	34, 12,
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
	(Bitmap*)dIFCommonItemNames_StarTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
