/* Sprite: SmashAttack */

/* Sprite: SmashAttack (132x32 ci4) */

Bitmap dSCExplainGraphics_SmashAttack_bitmaps[] = {
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex, 28, 0 },
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex + 0x7E8, 5, 0 },
};

Sprite dSCExplainGraphics_SmashAttack = {
	0, 0,
	132, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14DF0,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_SmashAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
