/* Sprite: UseItems */

/* Sprite: UseItems (162x14 ci4) */

Bitmap dSCExplainGraphics_UseItems_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_UseItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_UseItems = {
	0, 0,
	162, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1BE80,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_UseItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
