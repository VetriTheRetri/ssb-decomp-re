/* Sprite: Digit8 */

Gfx dIFCommonItemNames_Digit8_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit8 (9(16)x16 ia8) */
u8 dIFCommonItemNames_Digit8_tex[] = {
    #include <IFCommonItemNames/Digit8.ia8.inc.c>
};

Bitmap dIFCommonItemNames_Digit8_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItemNames_Digit8_tex, 16, 0 },
};

/* Sprite: Digit8 (9x16 ia8) */
Sprite dIFCommonItemNames_Digit8 = {
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
	(Bitmap*)dIFCommonItemNames_Digit8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
