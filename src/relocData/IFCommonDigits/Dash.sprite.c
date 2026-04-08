/* Sprite: Dash */

Gfx dIFCommonDigits_Dash_dl[] = { gsSPEndDisplayList() };

/* Texture: Dash (6(8)x3 ia8) */
u8 dIFCommonDigits_Dash_tex[] = {
    #include <IFCommonDigits/Dash.ia8.inc.c>
};

Bitmap dIFCommonDigits_Dash_bitmaps[] = {
	{ 6, 8, 0, 0, dIFCommonDigits_Dash_tex, 3, 0 },
};

/* Sprite: Dash (6x3 ia8) */
Sprite dIFCommonDigits_Dash = {
	0, 0,
	6, 3,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	3, 3,
	3, 1,
	(Bitmap*)dIFCommonDigits_Dash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
