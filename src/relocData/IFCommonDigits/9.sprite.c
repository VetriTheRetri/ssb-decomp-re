/* Sprite: 9 */

Gfx dIFCommonDigits_9_dl[] = { gsSPEndDisplayList() };

/* Texture: 9 (8x10 ia8) */
u8 dIFCommonDigits_9_tex[] = {
    #include <IFCommonDigits/9.ia8.inc.c>
};

Bitmap dIFCommonDigits_9_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonDigits_9_tex, 10, 0 },
};

/* Sprite: 9 (8x10 ia8) */
Sprite dIFCommonDigits_9 = {
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
	(Bitmap*)dIFCommonDigits_9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
