/* Sprite: 5 */

Gfx dIFCommonDigits_5_dl[] = { gsSPEndDisplayList() };

/* Texture: 5 (8x10 ia8) */
u8 dIFCommonDigits_5_tex[] = {
    #include <IFCommonDigits/5.ia8.inc.c>
};

Bitmap dIFCommonDigits_5_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonDigits_5_tex, 10, 0 },
};

/* Sprite: 5 (8x10 ia8) */
Sprite dIFCommonDigits_5 = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	3, 1,
	(Bitmap*)dIFCommonDigits_5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
