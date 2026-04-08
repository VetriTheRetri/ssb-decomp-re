/* Sprite: MarioIconBW */

Gfx dMNVSRecordMain_MarioIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioIconBW (15(16)x17 ia8) */
u8 dMNVSRecordMain_MarioIconBW_tex[] = {
    #include <MNVSRecordMain/MarioIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_MarioIconBW_bitmaps[] = {
	{ 15, 16, 0, 0, dMNVSRecordMain_MarioIconBW_tex, 17, 0 },
};

/* Sprite: MarioIconBW (15x17 ia8) */
Sprite dMNVSRecordMain_MarioIconBW = {
	0, 0,
	15, 17,
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
	(Bitmap*)dMNVSRecordMain_MarioIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
