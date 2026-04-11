/* Sprite: FinalText */

Gfx dSC1PIntro_FinalText_dl[] = { gsSPEndDisplayList() };

/* Texture: FinalText (48x19 i4) */
u8 dSC1PIntro_FinalText_tex[] = {
    #include <SC1PIntro/FinalText.i4.inc.c>
};

Bitmap dSC1PIntro_FinalText_bitmaps[] = {
	{ 48, 48, 0, 0, dSC1PIntro_FinalText_tex, 19, 0 },
};

/* Sprite: FinalText (48x19 i4) */
Sprite dSC1PIntro_FinalText = {
	0, 0,
	48, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dSC1PIntro_FinalText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
