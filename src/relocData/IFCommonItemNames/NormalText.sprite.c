/* Sprite: NormalText */

Gfx dIFCommonItemNames_NormalText_dl[] = { gsSPEndDisplayList() };

/* Texture: NormalText (46(48)x16 ia8) */
u8 dIFCommonItemNames_NormalText_tex[] = {
    #include <IFCommonItemNames/NormalText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_NormalText_bitmaps[] = {
	{ 46, 48, 0, 0, dIFCommonItemNames_NormalText_tex, 16, 0 },
};

/* Sprite: NormalText (46x16 ia8) */
Sprite dIFCommonItemNames_NormalText = {
	0, 0,
	46, 16,
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
	(Bitmap*)dIFCommonItemNames_NormalText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
