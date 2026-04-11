/* Sprite: StoneBackground */

/* Sprite: StoneBackground (64x32 ci4) */

Bitmap dMNSelectCommon_StoneBackground_bitmaps[] = {
	{ 64, 64, 0, 0, dMNSelectCommon_StoneBackground_tex, 32, 0 },
};

Sprite dMNSelectCommon_StoneBackground = {
	0, 0,
	64, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNSelectCommon_palette_0x0410,
	0, 1,
	1, 36,
	32, 32,
	2, 0,
	(Bitmap*)dMNSelectCommon_StoneBackground_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
