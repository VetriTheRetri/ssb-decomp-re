/* Sprite: NessIconColor */

Gfx dMNVSRecordMain_NessIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: NessIconColor (16x12 rgba16) */
u8 dMNVSRecordMain_NessIconColor_tex[] = {
    #include <MNVSRecordMain/NessIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_NessIconColor_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_NessIconColor_tex, 12, 0 },
};

/* Sprite: NessIconColor (16x12 rgba16) */
Sprite dMNVSRecordMain_NessIconColor = {
	0, 0,
	16, 12,
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
	(Bitmap*)dMNVSRecordMain_NessIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
