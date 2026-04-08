/* Sprite: LabelAvg */

Gfx dMNVSRecordMain_LabelAvg_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelAvg (31(32)x10 i4) */
u8 dMNVSRecordMain_LabelAvg_tex[] = {
    #include <MNVSRecordMain/LabelAvg.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelAvg_bitmaps[] = {
	{ 31, 32, 0, 0, dMNVSRecordMain_LabelAvg_tex, 10, 0 },
};

/* Sprite: LabelAvg (31x10 i4) */
Sprite dMNVSRecordMain_LabelAvg = {
	0, 0,
	31, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	4, 0,
	(Bitmap*)dMNVSRecordMain_LabelAvg_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
