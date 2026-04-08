/* Sprite: FoxIconBW */

Gfx dMNVSRecordMain_FoxIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxIconBW (15(16)x18 ia8) */
u8 dMNVSRecordMain_FoxIconBW_tex[] = {
    #include <MNVSRecordMain/FoxIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_FoxIconBW_bitmaps[] = {
	{ 15, 16, 0, 0, dMNVSRecordMain_FoxIconBW_tex, 18, 0 },
};

/* Sprite: FoxIconBW (15x18 ia8) */
Sprite dMNVSRecordMain_FoxIconBW = {
	0, 0,
	15, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNVSRecordMain_FoxIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
