/* Sprite: LabelKOd */

Gfx dMNVSRecordMain_LabelKOd_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelKOd (37(48)x9 i4) */
u8 dMNVSRecordMain_LabelKOd_tex[] = {
    #include <MNVSRecordMain/LabelKOd.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelKOd_bitmaps[] = {
	{ 37, 48, 0, 0, dMNVSRecordMain_LabelKOd_tex, 9, 0 },
};

/* Sprite: LabelKOd (37x9 i4) */
Sprite dMNVSRecordMain_LabelKOd = {
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
	(Bitmap*)dMNVSRecordMain_LabelKOd_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
