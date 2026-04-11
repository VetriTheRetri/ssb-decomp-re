/* Sprite: ThrowItems */

/* Sprite: ThrowItems (130x48 ci4) */

Bitmap dSCExplainGraphics_ThrowItems_bitmaps[] = {
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex, 27, 0 },
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex + 0x7A0, 22, 0 },
};

Sprite dSCExplainGraphics_ThrowItems = {
	0, 0,
	130, 48,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1CCE0,
	0, 1,
	2, 48,
	26, 27,
	2, 0,
	(Bitmap*)dSCExplainGraphics_ThrowItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
