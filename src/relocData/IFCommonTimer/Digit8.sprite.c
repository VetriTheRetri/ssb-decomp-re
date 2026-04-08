/* Sprite: Digit8 */

Gfx dIFCommonTimer_Digit8_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit8 (12(16)x18 ia8) */
u8 dIFCommonTimer_Digit8_tex[] = {
    #include <IFCommonTimer/Digit8.ia8.inc.c>
};

Bitmap dIFCommonTimer_Digit8_bitmaps[] = {
	{ 12, 16, 0, 0, dIFCommonTimer_Digit8_tex, 18, 0 },
};

/* Sprite: Digit8 (12x18 ia8) */
Sprite dIFCommonTimer_Digit8 = {
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
	(Bitmap*)dIFCommonTimer_Digit8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
