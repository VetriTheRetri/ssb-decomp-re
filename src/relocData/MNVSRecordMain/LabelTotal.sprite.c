/* Sprite: LabelTotal */

Gfx dMNVSRecordMain_LabelTotal_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelTotal (32x9 i4) */
u8 dMNVSRecordMain_LabelTotal_tex[] = {
    #include <MNVSRecordMain/LabelTotal.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelTotal_bitmaps[] = {
	{ 32, 32, 0, 0, dMNVSRecordMain_LabelTotal_tex, 9, 0 },
};

/* Sprite: LabelTotal (32x9 i4) */
Sprite dMNVSRecordMain_LabelTotal = {
	0, 0,
	32, 9,
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
	(Bitmap*)dMNVSRecordMain_LabelTotal_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
