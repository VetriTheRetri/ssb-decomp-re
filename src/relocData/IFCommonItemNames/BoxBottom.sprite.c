/* Sprite: BoxBottom */

/* Texture: BoxBottom (194(208)x4 ci4) */
u8 dIFCommonItemNames_BoxBottom_tex[] = {
    #include <IFCommonItemNames/BoxBottom.ci4.inc.c>
};

Bitmap dIFCommonItemNames_BoxBottom_bitmaps[] = {
	{ 194, 208, 0, 0, dIFCommonItemNames_BoxBottom_tex, 4, 0 },
};

/* Sprite: BoxBottom (194x4 ci4) */
Sprite dIFCommonItemNames_BoxBottom = {
	0, 0,
	194, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x420541EC,
	0, 1,
	1, 36,
	4, 4,
	2, 0,
	(Bitmap*)dIFCommonItemNames_BoxBottom_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
