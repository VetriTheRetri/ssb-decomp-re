/* Sprite: PlusSymbol */

/* Sprite: PlusSymbol (8x7 ci4) */

Bitmap dSCExplainGraphics_PlusSymbol_bitmaps[] = {
	{ 8, 16, 0, 0, dSCExplainGraphics_PlusSymbol_tex, 7, 0 },
};

Sprite dSCExplainGraphics_PlusSymbol = {
	0, 0,
	8, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DFE8,
	0, 1,
	1, 36,
	7, 7,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PlusSymbol_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
