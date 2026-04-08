/* Sprite: LabelTime */

Gfx dMNVSRecordMain_LabelTime_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelTime (37(48)x9 i4) */
u8 dMNVSRecordMain_LabelTime_tex[] = {
    #include <MNVSRecordMain/LabelTime.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelTime_bitmaps[] = {
	{ 37, 48, 0, 0, dMNVSRecordMain_LabelTime_tex, 9, 0 },
};

/* Sprite: LabelTime (37x9 i4) */
Sprite dMNVSRecordMain_LabelTime = {
	0, 0,
	37, 9,
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
	(Bitmap*)dMNVSRecordMain_LabelTime_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
