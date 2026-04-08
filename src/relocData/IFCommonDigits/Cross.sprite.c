/* Sprite: Cross */

Gfx dIFCommonDigits_Cross_dl[] = { gsSPEndDisplayList() };

/* Texture: Cross (11(16)x11 ia8) */
u8 dIFCommonDigits_Cross_tex[] = {
    #include <IFCommonDigits/Cross.ia8.inc.c>
};

Bitmap dIFCommonDigits_Cross_bitmaps[] = {
	{ 11, 16, 0, 0, dIFCommonDigits_Cross_tex, 11, 0 },
};

/* Sprite: Cross (11x11 ia8) */
Sprite dIFCommonDigits_Cross = {
	0, 0,
	11, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dIFCommonDigits_Cross_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
