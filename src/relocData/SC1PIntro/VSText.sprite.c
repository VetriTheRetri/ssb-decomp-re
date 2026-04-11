/* Sprite: VSText */

Gfx dSC1PIntro_VSText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSText (16x12 i4) */
u8 dSC1PIntro_VSText_tex[] = {
    #include <SC1PIntro/VSText.i4.inc.c>
};

Bitmap dSC1PIntro_VSText_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_VSText_tex, 12, 0 },
};

/* Sprite: VSText (16x12 i4) */
Sprite dSC1PIntro_VSText = {
	0, 0,
	16, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dSC1PIntro_VSText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
