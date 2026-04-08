/* Sprite: Digit1 */

Gfx dIFCommonTimer_Digit1_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit1 (8x18 ia8) */
u8 dIFCommonTimer_Digit1_tex[] = {
    #include <IFCommonTimer/Digit1.ia8.inc.c>
};

Bitmap dIFCommonTimer_Digit1_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonTimer_Digit1_tex, 18, 0 },
};

/* Sprite: Digit1 (8x18 ia8) */
Sprite dIFCommonTimer_Digit1 = {
	0, 0,
	8, 18,
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
	(Bitmap*)dIFCommonTimer_Digit1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
