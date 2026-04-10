/* Sprite: Cutout */

Gfx dMNTitle_Cutout_dl[] = { gsSPEndDisplayList() };

/* Texture: Cutout (208x92 i4, 3 tiles) */
u8 dMNTitle_Cutout_tex[] = {
    #include <MNTitle/Cutout.i4.inc.c>
};

Bitmap dMNTitle_Cutout_bitmaps[] = {
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex, 31, 0 },
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex + 0xCA0, 31, 0 },
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex + 0x1940, 30, 0 },
};

/* Sprite: Cutout (208x90 i4) */
Sprite dMNTitle_Cutout = {
	0, 0,
	208, 90,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	30, 31,
	4, 0,
	(Bitmap*)dMNTitle_Cutout_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
