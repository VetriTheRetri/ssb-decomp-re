/* Sprite: PerfectText */

Gfx dSC1PStageClear1_PerfectText_dl[] = { gsSPEndDisplayList() };

/* Texture: PerfectText (86(96)x8 i4) */
u8 dSC1PStageClear1_PerfectText_tex[] = {
    #include <SC1PStageClear1/PerfectText.i4.inc.c>
};

Bitmap dSC1PStageClear1_PerfectText_bitmaps[] = {
	{ 86, 96, 0, 0, dSC1PStageClear1_PerfectText_tex, 8, 0 },
};

/* Sprite: PerfectText (86x8 i4) */
Sprite dSC1PStageClear1_PerfectText = {
	0, 0,
	86, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dSC1PStageClear1_PerfectText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
