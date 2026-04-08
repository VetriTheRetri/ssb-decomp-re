/* Sprite: BoxBottom */

/* Texture: BoxBottom (194(208)x4 ci4) */
u8 dRelocFile29_BoxBottom_tex[] = {
    #include <file_29/BoxBottom.ci4.inc.c>
};

Bitmap dRelocFile29_BoxBottom_bitmaps[] = {
	{ 194, 208, 0, 0, dRelocFile29_BoxBottom_tex, 4, 0 },
};

/* Sprite: BoxBottom (194x4 ci4) */
Sprite dRelocFile29_BoxBottom = {
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
	(Bitmap*)dRelocFile29_BoxBottom_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
