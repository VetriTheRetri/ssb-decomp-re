/* Sprite: KirbyIconBW */

Gfx dMNVSRecordMain_KirbyIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyIconBW (18(24)x11 ia8) */
u8 dMNVSRecordMain_KirbyIconBW_tex[] = {
    #include <MNVSRecordMain/KirbyIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_KirbyIconBW_bitmaps[] = {
	{ 18, 24, 0, 0, dMNVSRecordMain_KirbyIconBW_tex, 11, 0 },
};

/* Sprite: KirbyIconBW (18x11 ia8) */
Sprite dMNVSRecordMain_KirbyIconBW = {
	0, 0,
	18, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNVSRecordMain_KirbyIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
