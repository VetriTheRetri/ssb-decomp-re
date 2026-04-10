/* Sprite: NoneText */

Gfx dIFCommonItemNames_NoneText_dl[] = { gsSPEndDisplayList() };

/* Texture: NoneText (31(32)x16 ia8) */
u8 dIFCommonItemNames_NoneText_tex[] = {
    #include <IFCommonItemNames/NoneText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_NoneText_bitmaps[] = {
	{ 31, 32, 0, 0, dIFCommonItemNames_NoneText_tex, 16, 0 },
};

/* Sprite: NoneText (31x16 ia8) */
Sprite dIFCommonItemNames_NoneText = {
	0, 0,
	31, 16,
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
	(Bitmap*)dIFCommonItemNames_NoneText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
