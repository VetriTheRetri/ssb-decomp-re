/* Sprite: LabelWinPercent */

Gfx dMNVSRecordMain_LabelWinPercent_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelWinPercent (30(32)x9 i4) */
u8 dMNVSRecordMain_LabelWinPercent_tex[] = {
    #include <MNVSRecordMain/LabelWinPercent.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelWinPercent_bitmaps[] = {
	{ 30, 32, 0, 0, dMNVSRecordMain_LabelWinPercent_tex, 9, 0 },
};

/* Sprite: LabelWinPercent (30x9 i4) */
Sprite dMNVSRecordMain_LabelWinPercent = {
	0, 0,
	30, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dMNVSRecordMain_LabelWinPercent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
