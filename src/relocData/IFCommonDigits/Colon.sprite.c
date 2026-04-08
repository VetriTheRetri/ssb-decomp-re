/* Sprite: Colon */

Gfx dIFCommonDigits_Colon_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon (6(8)x10 ia8) */
u8 dIFCommonDigits_Colon_tex[] = {
    #include <IFCommonDigits/Colon.ia8.inc.c>
};

Bitmap dIFCommonDigits_Colon_bitmaps[] = {
	{ 6, 8, 0, 0, dIFCommonDigits_Colon_tex, 10, 0 },
};

/* Sprite: Colon (6x10 ia8) */
Sprite dIFCommonDigits_Colon = {
	0, 0,
	6, 10,
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
	(Bitmap*)dIFCommonDigits_Colon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
