/* Sprite: BButton */

/* Sprite: BButton (24x39 ci8) */

Bitmap dSCExplainGraphics_BButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_BButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_BButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D738,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
