/* Sprite: CaptainIconBW */

Gfx dMNVSRecordMain_CaptainIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainIconBW (18(24)x15 ia8) */
u8 dMNVSRecordMain_CaptainIconBW_tex[] = {
    #include <MNVSRecordMain/CaptainIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_CaptainIconBW_bitmaps[] = {
	{ 18, 24, 0, 0, dMNVSRecordMain_CaptainIconBW_tex, 15, 0 },
};

/* Sprite: CaptainIconBW (18x15 ia8) */
Sprite dMNVSRecordMain_CaptainIconBW = {
	0, 0,
	18, 15,
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
	(Bitmap*)dMNVSRecordMain_CaptainIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
