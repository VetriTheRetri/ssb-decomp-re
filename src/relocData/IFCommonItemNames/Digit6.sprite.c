/* Sprite: Digit6 */

Gfx dIFCommonItemNames_Digit6_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit6 (9(16)x16 ia8) */
u8 dIFCommonItemNames_Digit6_tex[] = {
    #include <IFCommonItemNames/Digit6.ia8.inc.c>
};

Bitmap dIFCommonItemNames_Digit6_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItemNames_Digit6_tex, 16, 0 },
};

/* Sprite: Digit6 (9x16 ia8) */
Sprite dIFCommonItemNames_Digit6 = {
	0, 0,
	9, 16,
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
	(Bitmap*)dIFCommonItemNames_Digit6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
