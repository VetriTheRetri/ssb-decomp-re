/* Sprite: VSDecal */

Gfx dSC1PIntro_VSDecal_dl[] = { gsSPEndDisplayList() };

/* Texture: VSDecal (52x38 rgba32, 2 tiles) */
u8 dSC1PIntro_VSDecal_tex[] = {
    #include <SC1PIntro/VSDecal.rgba32.inc.c>
};

Bitmap dSC1PIntro_VSDecal_bitmaps[] = {
	{ 52, 52, 0, 0, dSC1PIntro_VSDecal_tex, 19, 0 },
	{ 52, 52, 0, 0, dSC1PIntro_VSDecal_tex + 0xF78, 19, 0 },
};

/* Sprite: VSDecal (52x37 rgba32) */
Sprite dSC1PIntro_VSDecal = {
	0, 0,
	52, 37,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	18, 19,
	0, 3,
	(Bitmap*)dSC1PIntro_VSDecal_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
