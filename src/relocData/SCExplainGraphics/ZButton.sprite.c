/* Sprite: ZButton */

/* Sprite: ZButton (24x39 ci8) */

Bitmap dSCExplainGraphics_ZButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_ZButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_ZButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DD48,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_ZButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
