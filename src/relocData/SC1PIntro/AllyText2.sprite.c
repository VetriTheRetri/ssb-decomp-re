/* Sprite: AllyText2 */

Gfx dSC1PIntro_AllyText2_dl[] = { gsSPEndDisplayList() };

/* Texture: AllyText2 (32x12 i4) */
u8 dSC1PIntro_AllyText2_tex[] = {
    #include <SC1PIntro/AllyText2.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText2_bitmaps[] = {
	{ 32, 32, 0, 0, dSC1PIntro_AllyText2_tex, 12, 0 },
};

/* Sprite: AllyText2 (32x12 i4) */
Sprite dSC1PIntro_AllyText2 = {
	0, 0,
	32, 12,
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
	(Bitmap*)dSC1PIntro_AllyText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
