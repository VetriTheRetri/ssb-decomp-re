/* Sprite: LabelUsePercent */

Gfx dMNVSRecordMain_LabelUsePercent_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelUsePercent (29(32)x9 i4) */
u8 dMNVSRecordMain_LabelUsePercent_tex[] = {
    #include <MNVSRecordMain/LabelUsePercent.i4.inc.c>
};

Bitmap dMNVSRecordMain_LabelUsePercent_bitmaps[] = {
	{ 29, 32, 0, 0, dMNVSRecordMain_LabelUsePercent_tex, 9, 0 },
};

/* Sprite: LabelUsePercent (29x9 i4) */
Sprite dMNVSRecordMain_LabelUsePercent = {
	0, 0,
	29, 9,
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
	(Bitmap*)dMNVSRecordMain_LabelUsePercent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
