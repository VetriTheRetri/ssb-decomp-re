/* Sprite: LabelTKO */

Gfx dMNVSRecordMain_LabelTKO_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelTKO (30(32)x9 i4) */
u8 dMNVSRecordMain_LabelTKO_tex[] = {
    #include <MNVSRecordMain/LabelTKO.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelTKO_bitmaps[] = {
	{ 30, 32, 0, 0, dMNVSRecordMain_LabelTKO_tex, 9, 0 },
};

/* Sprite: LabelTKO (30x9 i4) */
Sprite dMNVSRecordMain_LabelTKO = {
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
	(Bitmap*)dMNVSRecordMain_LabelTKO_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
