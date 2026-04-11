/* Sprite: StartFighting */

Gfx dSCExplainGraphics_StartFighting_dl[] = { gsSPEndDisplayList() };

/* Texture: StartFighting (154(160)x32 i4) */
u8 dSCExplainGraphics_StartFighting_tex[] = {
    #include <SCExplainGraphics/StartFighting.i4.inc.c>
};

Bitmap dSCExplainGraphics_StartFighting_bitmaps[] = {
	{ 154, 160, 0, 0, dSCExplainGraphics_StartFighting_tex, 32, 0 },
};

/* Sprite: StartFighting (154x32 i4) */
Sprite dSCExplainGraphics_StartFighting = {
	0, 0,
	154, 32,
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
	(Bitmap*)dSCExplainGraphics_StartFighting_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
