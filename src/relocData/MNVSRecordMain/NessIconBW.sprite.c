/* Sprite: NessIconBW */

Gfx dMNVSRecordMain_NessIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: NessIconBW (16x15 ia8) */
u8 dMNVSRecordMain_NessIconBW_tex[] = {
    #include <MNVSRecordMain/NessIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_NessIconBW_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_NessIconBW_tex, 15, 0 },
};

/* Sprite: NessIconBW (16x15 ia8) */
Sprite dMNVSRecordMain_NessIconBW = {
	0, 0,
	16, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSRecordMain_NessIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
