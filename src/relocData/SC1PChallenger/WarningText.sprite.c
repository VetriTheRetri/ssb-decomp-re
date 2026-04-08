/* Sprite: WarningText */

Gfx dSC1PChallenger_WarningText_dl[] = { gsSPEndDisplayList() };

/* Texture: WarningText (116(128)x18 i4c) */
u8 dSC1PChallenger_WarningText_tex[] = {
    #include <SC1PChallenger/WarningText.i4c.inc.c>
};

Bitmap dSC1PChallenger_WarningText_bitmaps[] = {
	{ 116, 128, 0, 0, dSC1PChallenger_WarningText_tex, 18, 0 },
};

/* Sprite: WarningText (116x18 i4c) */
Sprite dSC1PChallenger_WarningText = {
	0, 0,
	116, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	4, 4,
	(Bitmap*)dSC1PChallenger_WarningText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
