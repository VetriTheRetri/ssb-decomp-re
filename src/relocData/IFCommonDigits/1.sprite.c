/* Sprite: 1 */

Gfx dIFCommonDigits_1_dl[] = { gsSPEndDisplayList() };

/* Texture: 1 (5(8)x10 ia8) */
u8 dIFCommonDigits_1_tex[] = {
    #include <IFCommonDigits/1.ia8.inc.c>
};

Bitmap dIFCommonDigits_1_bitmaps[] = {
	{ 5, 8, 0, 0, dIFCommonDigits_1_tex, 10, 0 },
};

/* Sprite: 1 (5x10 ia8) */
Sprite dIFCommonDigits_1 = {
	0, 0,
	5, 10,
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
	(Bitmap*)dIFCommonDigits_1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
