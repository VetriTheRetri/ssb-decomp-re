/* Sprite: NearTextJap */

Gfx dIFCommonItemNames_NearTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NearTextJap (22(32)x12 i4) */
u8 dIFCommonItemNames_NearTextJap_tex[] = {
    #include <IFCommonItemNames/NearTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_NearTextJap_bitmaps[] = {
	{ 22, 32, 0, 0, dIFCommonItemNames_NearTextJap_tex, 12, 0 },
};

/* Sprite: NearTextJap (22x12 i4) */
Sprite dIFCommonItemNames_NearTextJap = {
	0, 0,
	22, 12,
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
	(Bitmap*)dIFCommonItemNames_NearTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
