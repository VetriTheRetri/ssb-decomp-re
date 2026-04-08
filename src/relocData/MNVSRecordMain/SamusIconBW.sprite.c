/* Sprite: SamusIconBW */

Gfx dMNVSRecordMain_SamusIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusIconBW (18(24)x16 ia8) */
u8 dMNVSRecordMain_SamusIconBW_tex[] = {
    #include <MNVSRecordMain/SamusIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_SamusIconBW_bitmaps[] = {
	{ 18, 24, 0, 0, dMNVSRecordMain_SamusIconBW_tex, 16, 0 },
};

/* Sprite: SamusIconBW (18x16 ia8) */
Sprite dMNVSRecordMain_SamusIconBW = {
	0, 0,
	18, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dMNVSRecordMain_SamusIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
