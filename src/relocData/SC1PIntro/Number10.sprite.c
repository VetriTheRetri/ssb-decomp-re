/* Sprite: Number10 */

Gfx dSC1PIntro_Number10_dl[] = { gsSPEndDisplayList() };

/* Texture: Number10 (18(32)x20 i4) */
u8 dSC1PIntro_Number10_tex[] = {
    #include <SC1PIntro/Number10.i4.inc.c>
};

Bitmap dSC1PIntro_Number10_bitmaps[] = {
	{ 18, 32, 0, 0, dSC1PIntro_Number10_tex, 20, 0 },
};

/* Sprite: Number10 (18x20 i4) */
Sprite dSC1PIntro_Number10 = {
	0, 0,
	18, 20,
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
	(Bitmap*)dSC1PIntro_Number10_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
