/* Sprite: BoxTop */

/* Texture: BoxTop (194(208)x4 ci4) */
u8 dIFCommonItemNames_BoxTop_tex[] = {
    #include <IFCommonItemNames/BoxTop.ci4.inc.c>
};

Bitmap dIFCommonItemNames_BoxTop_bitmaps[] = {
	{ 194, 208, 0, 0, dIFCommonItemNames_BoxTop_tex, 4, 0 },
};

/* Sprite: BoxTop (194x4 ci4) */
Sprite dIFCommonItemNames_BoxTop = {
	0, 0,
	194, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x3ED13EB8,
	0, 1,
	1, 36,
	4, 4,
	2, 0,
	(Bitmap*)dIFCommonItemNames_BoxTop_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
