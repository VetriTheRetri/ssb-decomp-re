/* Sprite: BobOmbText */

Gfx dIFCommonItemNames_BobOmbText_dl[] = { gsSPEndDisplayList() };

/* Texture: BobOmbText (56x16 ia8) */
u8 dIFCommonItemNames_BobOmbText_tex[] = {
    #include <IFCommonItemNames/BobOmbText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_BobOmbText_bitmaps[] = {
	{ 56, 56, 0, 0, dIFCommonItemNames_BobOmbText_tex, 16, 0 },
};

/* Sprite: BobOmbText (56x16 ia8) */
Sprite dIFCommonItemNames_BobOmbText = {
	0, 0,
	56, 16,
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
	(Bitmap*)dIFCommonItemNames_BobOmbText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
