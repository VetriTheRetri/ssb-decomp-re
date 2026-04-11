/* Sprite: Damage2 */

Gfx dSCExplainGraphics_Damage2_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage2 (102(112)x28 i4) */
u8 dSCExplainGraphics_Damage2_tex[] = {
    #include <SCExplainGraphics/Damage2.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage2_bitmaps[] = {
	{ 102, 112, 0, 0, dSCExplainGraphics_Damage2_tex, 28, 0 },
};

/* Sprite: Damage2 (102x28 i4) */
Sprite dSCExplainGraphics_Damage2 = {
	0, 0,
	102, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
