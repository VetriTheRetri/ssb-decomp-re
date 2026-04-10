/* Sprite: NormalTextJap */

Gfx dIFCommonItemNames_NormalTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NormalTextJap (32x12 i4) */
u8 dIFCommonItemNames_NormalTextJap_tex[] = {
    #include <IFCommonItemNames/NormalTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_NormalTextJap_bitmaps[] = {
	{ 32, 32, 0, 0, dIFCommonItemNames_NormalTextJap_tex, 12, 0 },
};

/* Sprite: NormalTextJap (32x12 i4) */
Sprite dIFCommonItemNames_NormalTextJap = {
	0, 0,
	32, 12,
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
	(Bitmap*)dIFCommonItemNames_NormalTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
