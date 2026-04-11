/* Sprite: PowerAttack */

/* Sprite: PowerAttack (160x30 ci4) */

Bitmap dSCExplainGraphics_PowerAttack_bitmaps[] = {
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex, 24, 0 },
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex + 0x788, 7, 0 },
};

Sprite dSCExplainGraphics_PowerAttack = {
	0, 0,
	160, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14408,
	0, 1,
	2, 48,
	23, 24,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PowerAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
