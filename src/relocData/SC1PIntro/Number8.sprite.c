/* Sprite: Number8 */

Gfx dSC1PIntro_Number8_dl[] = { gsSPEndDisplayList() };

/* Texture: Number8 (15(16)x20 i4) */
u8 dSC1PIntro_Number8_tex[] = {
    #include <SC1PIntro/Number8.i4.inc.c>
};

Bitmap dSC1PIntro_Number8_bitmaps[] = {
	{ 15, 16, 0, 0, dSC1PIntro_Number8_tex, 20, 0 },
};

/* Sprite: Number8 (15x20 i4) */
Sprite dSC1PIntro_Number8 = {
	0, 0,
	15, 20,
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
	(Bitmap*)dSC1PIntro_Number8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
