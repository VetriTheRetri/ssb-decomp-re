/* Sprite: Damage3 */

Gfx dSCExplainGraphics_Damage3_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage3 (144x32 i4) */
u8 dSCExplainGraphics_Damage3_tex[] = {
    #include <SCExplainGraphics/Damage3.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage3_bitmaps[] = {
	{ 144, 144, 0, 0, dSCExplainGraphics_Damage3_tex, 32, 0 },
};

/* Sprite: Damage3 (144x32 i4) */
Sprite dSCExplainGraphics_Damage3 = {
	0, 0,
	144, 32,
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
	(Bitmap*)dSCExplainGraphics_Damage3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
