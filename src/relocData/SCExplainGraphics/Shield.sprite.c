/* Sprite: Shield */

Gfx dSCExplainGraphics_Shield_dl[] = { gsSPEndDisplayList() };

/* Texture: Shield (164(176)x16 i4) */
u8 dSCExplainGraphics_Shield_tex[] = {
    #include <SCExplainGraphics/Shield.i4.inc.c>
};

Bitmap dSCExplainGraphics_Shield_bitmaps[] = {
	{ 164, 176, 0, 0, dSCExplainGraphics_Shield_tex, 16, 0 },
};

/* Sprite: Shield (164x16 i4) */
Sprite dSCExplainGraphics_Shield = {
	0, 0,
	164, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Shield_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
