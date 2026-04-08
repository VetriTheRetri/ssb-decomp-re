/* Sprite: YoshiIconBW */

Gfx dMNVSRecordMain_YoshiIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiIconBW (13(16)x17 ia8) */
u8 dMNVSRecordMain_YoshiIconBW_tex[] = {
    #include <MNVSRecordMain/YoshiIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_YoshiIconBW_bitmaps[] = {
	{ 13, 16, 0, 0, dMNVSRecordMain_YoshiIconBW_tex, 17, 0 },
};

/* Sprite: YoshiIconBW (13x17 ia8) */
Sprite dMNVSRecordMain_YoshiIconBW = {
	0, 0,
	13, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	3, 1,
	(Bitmap*)dMNVSRecordMain_YoshiIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
