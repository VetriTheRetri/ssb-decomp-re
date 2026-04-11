/* Sprite: MarioBrosText */

Gfx dSC1PIntro_MarioBrosText_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioBrosText (67(80)x12 i4) */
u8 dSC1PIntro_MarioBrosText_tex[] = {
    #include <SC1PIntro/MarioBrosText.i4.inc.c>
};

Bitmap dSC1PIntro_MarioBrosText_bitmaps[] = {
	{ 67, 80, 0, 0, dSC1PIntro_MarioBrosText_tex, 12, 0 },
};

/* Sprite: MarioBrosText (67x12 i4) */
Sprite dSC1PIntro_MarioBrosText = {
	0, 0,
	67, 12,
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
	(Bitmap*)dSC1PIntro_MarioBrosText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
