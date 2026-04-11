/* Sprite: KnockThemOff */

/* Sprite: KnockThemOff (200x32 ci4) */

Bitmap dSCExplainGraphics_KnockThemOff_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex, 19, 0 },
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex + 0x7C0, 14, 0 },
};

Sprite dSCExplainGraphics_KnockThemOff = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x15C00,
	0, 1,
	2, 48,
	18, 19,
	2, 0,
	(Bitmap*)dSCExplainGraphics_KnockThemOff_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
