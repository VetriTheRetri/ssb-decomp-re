/* Sprite: Digit9 */

Gfx dIFCommonItemNames_Digit9_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit9 (9(16)x16 ia8) */
u8 dIFCommonItemNames_Digit9_tex[] = {
    #include <IFCommonItemNames/Digit9.ia8.inc.c>
};

Bitmap dIFCommonItemNames_Digit9_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItemNames_Digit9_tex, 16, 0 },
};

/* Sprite: Digit9 (9x16 ia8) */
Sprite dIFCommonItemNames_Digit9 = {
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
	(Bitmap*)dIFCommonItemNames_Digit9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
