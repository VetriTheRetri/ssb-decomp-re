/* Sprite: GrabItems */

/* Sprite: GrabItems (148x14 ci4) */

Bitmap dSCExplainGraphics_GrabItems_bitmaps[] = {
	{ 148, 160, 0, 0, dSCExplainGraphics_GrabItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_GrabItems = {
	0, 0,
	148, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1B920,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_GrabItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
