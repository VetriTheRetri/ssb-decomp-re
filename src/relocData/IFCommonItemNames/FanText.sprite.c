/* Sprite: FanText */

Gfx dIFCommonItemNames_FanText_dl[] = { gsSPEndDisplayList() };

/* Texture: FanText (24x16 ia8) */
u8 dIFCommonItemNames_FanText_tex[] = {
    #include <IFCommonItemNames/FanText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_FanText_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonItemNames_FanText_tex, 16, 0 },
};

/* Sprite: FanText (24x16 ia8) */
Sprite dIFCommonItemNames_FanText = {
	0, 0,
	24, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dIFCommonItemNames_FanText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
