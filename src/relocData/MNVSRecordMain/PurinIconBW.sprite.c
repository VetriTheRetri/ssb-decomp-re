/* Sprite: PurinIconBW */

Gfx dMNVSRecordMain_PurinIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: PurinIconBW (16x13 ia8) */
u8 dMNVSRecordMain_PurinIconBW_tex[] = {
    #include <MNVSRecordMain/PurinIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_PurinIconBW_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_PurinIconBW_tex, 13, 0 },
};

/* Sprite: PurinIconBW (16x13 ia8) */
Sprite dMNVSRecordMain_PurinIconBW = {
	0, 0,
	16, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	3, 1,
	(Bitmap*)dMNVSRecordMain_PurinIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
