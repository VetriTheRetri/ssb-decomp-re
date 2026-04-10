/* Sprite: FanText2 */

Gfx dIFCommonItemNames_FanText2_dl[] = { gsSPEndDisplayList() };

/* Texture: FanText2 (23(24)x15 ia8) */
u8 dIFCommonItemNames_FanText2_tex[] = {
    #include <IFCommonItemNames/FanText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_FanText2_bitmaps[] = {
	{ 23, 24, 0, 0, dIFCommonItemNames_FanText2_tex, 15, 0 },
};

/* Sprite: FanText2 (23x15 ia8) */
Sprite dIFCommonItemNames_FanText2 = {
	0, 0,
	23, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dIFCommonItemNames_FanText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
