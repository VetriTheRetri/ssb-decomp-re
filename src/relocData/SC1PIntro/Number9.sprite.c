/* Sprite: Number9 */

Gfx dSC1PIntro_Number9_dl[] = { gsSPEndDisplayList() };

/* Texture: Number9 (13(16)x20 i4) */
u8 dSC1PIntro_Number9_tex[] = {
    #include <SC1PIntro/Number9.i4.inc.c>
};

Bitmap dSC1PIntro_Number9_bitmaps[] = {
	{ 13, 16, 0, 0, dSC1PIntro_Number9_tex, 20, 0 },
};

/* Sprite: Number9 (13x20 i4) */
Sprite dSC1PIntro_Number9 = {
	0, 0,
	13, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
