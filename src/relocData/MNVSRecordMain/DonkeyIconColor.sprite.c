/* Sprite: DonkeyIconColor */

Gfx dMNVSRecordMain_DonkeyIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: DonkeyIconColor (21(24)x12 rgba16) */
u8 dMNVSRecordMain_DonkeyIconColor_tex[] = {
    #include <MNVSRecordMain/DonkeyIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_DonkeyIconColor_bitmaps[] = {
	{ 21, 24, 0, 0, dMNVSRecordMain_DonkeyIconColor_tex, 12, 0 },
};

/* Sprite: DonkeyIconColor (21x12 rgba16) */
Sprite dMNVSRecordMain_DonkeyIconColor = {
	0, 0,
	21, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dMNVSRecordMain_DonkeyIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
