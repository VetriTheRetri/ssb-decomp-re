/* Sprite: Damage1 */

Gfx dSCExplainGraphics_Damage1_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage1 (200(208)x32 i4) */
u8 dSCExplainGraphics_Damage1_tex[] = {
    #include <SCExplainGraphics/Damage1.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage1_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_Damage1_tex, 32, 0 },
};

/* Sprite: Damage1 (200x32 i4) */
Sprite dSCExplainGraphics_Damage1 = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
