/* Sprite: QuitTextJap */

Gfx dIFCommonItemNames_QuitTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: QuitTextJap (108(112)x12 i4) */
u8 dIFCommonItemNames_QuitTextJap_tex[] = {
    #include <IFCommonItemNames/QuitTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_QuitTextJap_bitmaps[] = {
	{ 108, 112, 0, 0, dIFCommonItemNames_QuitTextJap_tex, 12, 0 },
};

/* Sprite: QuitTextJap (108x12 i4) */
Sprite dIFCommonItemNames_QuitTextJap = {
	0, 0,
	108, 12,
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
	(Bitmap*)dIFCommonItemNames_QuitTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
