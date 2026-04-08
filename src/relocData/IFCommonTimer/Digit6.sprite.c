/* Sprite: Digit6 */

Gfx dIFCommonTimer_Digit6_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit6 (12(16)x18 ia8) */
u8 dIFCommonTimer_Digit6_tex[] = {
    #include <IFCommonTimer/Digit6.ia8.inc.c>
};

Bitmap dIFCommonTimer_Digit6_bitmaps[] = {
	{ 12, 16, 0, 0, dIFCommonTimer_Digit6_tex, 18, 0 },
};

/* Sprite: Digit6 (12x18 ia8) */
Sprite dIFCommonTimer_Digit6 = {
	0, 0,
	12, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dIFCommonTimer_Digit6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
