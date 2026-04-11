/* Sprite: BreakTheTargetsText */

Gfx dSC1PIntro_BreakTheTargetsText_dl[] = { gsSPEndDisplayList() };

/* Texture: BreakTheTargetsText (178(192)x20 i4) */
u8 dSC1PIntro_BreakTheTargetsText_tex[] = {
    #include <SC1PIntro/BreakTheTargetsText.i4.inc.c>
};

Bitmap dSC1PIntro_BreakTheTargetsText_bitmaps[] = {
	{ 178, 192, 0, 0, dSC1PIntro_BreakTheTargetsText_tex, 20, 0 },
};

/* Sprite: BreakTheTargetsText (178x20 i4) */
Sprite dSC1PIntro_BreakTheTargetsText = {
	0, 0,
	178, 20,
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
	(Bitmap*)dSC1PIntro_BreakTheTargetsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
