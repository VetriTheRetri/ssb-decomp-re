/* Sprite: Digit3 */

Gfx dIFCommonTimer_Digit3_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit3 (12(16)x18 ia8) */
u8 dIFCommonTimer_Digit3_tex[] = {
    #include <IFCommonTimer/Digit3.ia8.inc.c>
};

Bitmap dIFCommonTimer_Digit3_bitmaps[] = {
	{ 12, 16, 0, 0, dIFCommonTimer_Digit3_tex, 18, 0 },
};

/* Sprite: Digit3 (12x18 ia8) */
Sprite dIFCommonTimer_Digit3 = {
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
	(Bitmap*)dIFCommonTimer_Digit3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
