/* Sprite: BobOmbText2 */

Gfx dIFCommonItemNames_BobOmbText2_dl[] = { gsSPEndDisplayList() };

/* Texture: BobOmbText2 (60(64)x15 ia8) */
u8 dIFCommonItemNames_BobOmbText2_tex[] = {
    #include <IFCommonItemNames/BobOmbText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_BobOmbText2_bitmaps[] = {
	{ 60, 64, 0, 0, dIFCommonItemNames_BobOmbText2_tex, 15, 0 },
};

/* Sprite: BobOmbText2 (60x15 ia8) */
Sprite dIFCommonItemNames_BobOmbText2 = {
	0, 0,
	60, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dIFCommonItemNames_BobOmbText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
