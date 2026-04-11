/* Sprite: PlayerCount */

Gfx dSCExplainGraphics_PlayerCount_dl[] = { gsSPEndDisplayList() };

/* Texture: PlayerCount (170(176)x14 i4) */
u8 dSCExplainGraphics_PlayerCount_tex[] = {
    #include <SCExplainGraphics/PlayerCount.i4.inc.c>
};

Bitmap dSCExplainGraphics_PlayerCount_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_PlayerCount_tex, 14, 0 },
};

/* Sprite: PlayerCount (170x14 i4) */
Sprite dSCExplainGraphics_PlayerCount = {
	0, 0,
	170, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSCExplainGraphics_PlayerCount_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
