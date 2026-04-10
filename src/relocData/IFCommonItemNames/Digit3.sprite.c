/* Sprite: Digit3 */

Gfx dIFCommonItemNames_Digit3_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit3 (8x16 ia8) */
u8 dIFCommonItemNames_Digit3_tex[] = {
    #include <IFCommonItemNames/Digit3.ia8.inc.c>
};

Bitmap dIFCommonItemNames_Digit3_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonItemNames_Digit3_tex, 16, 0 },
};

/* Sprite: Digit3 (8x16 ia8) */
Sprite dIFCommonItemNames_Digit3 = {
	0, 0,
	8, 16,
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
	(Bitmap*)dIFCommonItemNames_Digit3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
