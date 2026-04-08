/* Sprite: 2 */

Gfx dIFCommonDigits_2_dl[] = { gsSPEndDisplayList() };

/* Texture: 2 (8x10 ia8) */
u8 dIFCommonDigits_2_tex[] = {
    #include <IFCommonDigits/2.ia8.inc.c>
};

Bitmap dIFCommonDigits_2_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonDigits_2_tex, 10, 0 },
};

/* Sprite: 2 (8x10 ia8) */
Sprite dIFCommonDigits_2 = {
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
	(Bitmap*)dIFCommonDigits_2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
