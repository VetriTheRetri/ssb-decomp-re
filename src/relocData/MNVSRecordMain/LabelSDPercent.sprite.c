/* Sprite: LabelSDPercent */

Gfx dMNVSRecordMain_LabelSDPercent_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelSDPercent (27(32)x9 i4) */
u8 dMNVSRecordMain_LabelSDPercent_tex[] = {
    #include <MNVSRecordMain/LabelSDPercent.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelSDPercent_bitmaps[] = {
	{ 27, 32, 0, 0, dMNVSRecordMain_LabelSDPercent_tex, 9, 0 },
};

/* Sprite: LabelSDPercent (27x9 i4) */
Sprite dMNVSRecordMain_LabelSDPercent = {
	0, 0,
	27, 9,
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
	(Bitmap*)dMNVSRecordMain_LabelSDPercent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
