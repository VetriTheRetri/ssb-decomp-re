/* Sprite: Platform */

/* Texture: Platform (16x16 ci4) */
u8 dSC1PStageClear3_Platform_tex[] = {
    #include <SC1PStageClear3/Platform.ci4.inc.c>
};

Bitmap dSC1PStageClear3_Platform_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PStageClear3_Platform_tex, 16, 0 },
};

/* Sprite: Platform (16x16 ci4) */
Sprite dSC1PStageClear3_Platform = {
	0, 0,
	16, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x003D0024,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dSC1PStageClear3_Platform_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
