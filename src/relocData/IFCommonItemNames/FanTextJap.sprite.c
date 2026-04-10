/* Sprite: FanTextJap */

Gfx dIFCommonItemNames_FanTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: FanTextJap (43(48)x12 i4) */
u8 dIFCommonItemNames_FanTextJap_tex[] = {
    #include <IFCommonItemNames/FanTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_FanTextJap_bitmaps[] = {
	{ 43, 48, 0, 0, dIFCommonItemNames_FanTextJap_tex, 12, 0 },
};

/* Sprite: FanTextJap (43x12 i4) */
Sprite dIFCommonItemNames_FanTextJap = {
	0, 0,
	43, 12,
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
	(Bitmap*)dIFCommonItemNames_FanTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
