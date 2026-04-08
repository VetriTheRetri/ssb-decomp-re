/* Sprite: Digit4 */

Gfx dIFCommonTimer_Digit4_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit4 (12(16)x18 ia8) */
u8 dIFCommonTimer_Digit4_tex[] = {
    #include <IFCommonTimer/Digit4.ia8.inc.c>
};

Bitmap dIFCommonTimer_Digit4_bitmaps[] = {
	{ 12, 16, 0, 0, dIFCommonTimer_Digit4_tex, 18, 0 },
};

/* Sprite: Digit4 (12x18 ia8) */
Sprite dIFCommonTimer_Digit4 = {
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
	(Bitmap*)dIFCommonTimer_Digit4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
