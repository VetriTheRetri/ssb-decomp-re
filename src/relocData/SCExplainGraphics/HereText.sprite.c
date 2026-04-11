/* Sprite: HereText */

Gfx dSCExplainGraphics_HereText_dl[] = { gsSPEndDisplayList() };

/* Texture: HereText (42(44)x12 rgba16) */
u8 dSCExplainGraphics_HereText_tex[] = {
    #include <SCExplainGraphics/HereText.rgba16.inc.c>
};

Bitmap dSCExplainGraphics_HereText_bitmaps[] = {
	{ 42, 44, 0, 0, dSCExplainGraphics_HereText_tex, 12, 0 },
};

/* Sprite: HereText (42x12 rgba16) */
Sprite dSCExplainGraphics_HereText = {
	0, 0,
	42, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dSCExplainGraphics_HereText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
