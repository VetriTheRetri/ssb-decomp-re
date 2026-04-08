/* Sprite: Label */

Gfx dMNVSRecordMain_Label_dl[] = { gsSPEndDisplayList() };

/* Texture: Label (119(120)x14 ia8) */
u8 dMNVSRecordMain_Label_tex[] = {
    #include <MNVSRecordMain/Label.ia8.inc.c>
};

Bitmap dMNVSRecordMain_Label_bitmaps[] = {
	{ 119, 120, 0, 0, dMNVSRecordMain_Label_tex, 14, 0 },
};

/* Sprite: Label (119x14 ia8) */
Sprite dMNVSRecordMain_Label = {
	0, 0,
	119, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	3, 1,
	(Bitmap*)dMNVSRecordMain_Label_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
