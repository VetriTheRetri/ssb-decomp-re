/* Sprite: PikachuIconBW */

Gfx dMNVSRecordMain_PikachuIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: PikachuIconBW (18(24)x17 ia8) */
u8 dMNVSRecordMain_PikachuIconBW_tex[] = {
    #include <MNVSRecordMain/PikachuIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_PikachuIconBW_bitmaps[] = {
	{ 18, 24, 0, 0, dMNVSRecordMain_PikachuIconBW_tex, 17, 0 },
};

/* Sprite: PikachuIconBW (18x17 ia8) */
Sprite dMNVSRecordMain_PikachuIconBW = {
	0, 0,
	18, 17,
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
	(Bitmap*)dMNVSRecordMain_PikachuIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
