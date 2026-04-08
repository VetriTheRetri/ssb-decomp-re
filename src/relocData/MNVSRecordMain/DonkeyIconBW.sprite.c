/* Sprite: DonkeyIconBW */

Gfx dMNVSRecordMain_DonkeyIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: DonkeyIconBW (18(24)x18 ia8) */
u8 dMNVSRecordMain_DonkeyIconBW_tex[] = {
    #include <MNVSRecordMain/DonkeyIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_DonkeyIconBW_bitmaps[] = {
	{ 18, 24, 0, 0, dMNVSRecordMain_DonkeyIconBW_tex, 18, 0 },
};

/* Sprite: DonkeyIconBW (18x18 ia8) */
Sprite dMNVSRecordMain_DonkeyIconBW = {
	0, 0,
	18, 18,
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
	(Bitmap*)dMNVSRecordMain_DonkeyIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
