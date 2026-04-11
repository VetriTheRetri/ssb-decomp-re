/* Sprite: AButton */

/* Sprite: AButton (24x39 ci8) */

Bitmap dSCExplainGraphics_AButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_AButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_AButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D128,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_AButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
