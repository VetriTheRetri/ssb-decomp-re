/* Sprite: BonusBorder */

Gfx dSC1PStageClear1_BonusBorder_dl[] = { gsSPEndDisplayList() };

/* Texture: BonusBorder (216x135 ia8, 8 tiles) */
u8 dSC1PStageClear1_BonusBorder_tex[] = {
    #include <SC1PStageClear1/BonusBorder.ia8.inc.c>
};

Bitmap dSC1PStageClear1_BonusBorder_bitmaps[] = {
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0xF38, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x1E70, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x2DA8, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x3CE0, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x4C18, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x5B50, 18, 0 },
	{ 216, 216, 0, 0, dSC1PStageClear1_BonusBorder_tex + 0x6A88, 9, 0 },
};

/* Sprite: BonusBorder (216x128 ia8) */
Sprite dSC1PStageClear1_BonusBorder = {
	0, 0,
	216, 128,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	8, 120,
	17, 18,
	3, 1,
	(Bitmap*)dSC1PStageClear1_BonusBorder_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
