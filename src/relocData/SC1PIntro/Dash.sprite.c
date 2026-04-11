/* Sprite: Dash */

Gfx dSC1PIntro_Dash_dl[] = { gsSPEndDisplayList() };

/* Texture: Dash (12(16)x12 i4) */
u8 dSC1PIntro_Dash_tex[] = {
    #include <SC1PIntro/Dash.i4.inc.c>
};

Bitmap dSC1PIntro_Dash_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Dash_tex, 12, 0 },
};

/* Sprite: Dash (12x12 i4) */
Sprite dSC1PIntro_Dash = {
	0, 0,
	12, 12,
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
	(Bitmap*)dSC1PIntro_Dash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
