/* Sprite: MaximTomatoText2 */

Gfx dIFCommonItemNames_MaximTomatoText2_dl[] = { gsSPEndDisplayList() };

/* Texture: MaximTomatoText2 (89(96)x16 ia8) */
u8 dIFCommonItemNames_MaximTomatoText2_tex[] = {
    #include <IFCommonItemNames/MaximTomatoText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_MaximTomatoText2_bitmaps[] = {
	{ 89, 96, 0, 0, dIFCommonItemNames_MaximTomatoText2_tex, 16, 0 },
};

/* Sprite: MaximTomatoText2 (89x16 ia8) */
Sprite dIFCommonItemNames_MaximTomatoText2 = {
	0, 0,
	89, 16,
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
	(Bitmap*)dIFCommonItemNames_MaximTomatoText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
