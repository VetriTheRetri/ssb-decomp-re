/* Sprite: YoshiIconColor */

Gfx dMNVSRecordMain_YoshiIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiIconColor (13(16)x12 rgba16) */
u8 dMNVSRecordMain_YoshiIconColor_tex[] = {
    #include <MNVSRecordMain/YoshiIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_YoshiIconColor_bitmaps[] = {
	{ 13, 16, 0, 0, dMNVSRecordMain_YoshiIconColor_tex, 12, 0 },
};

/* Sprite: YoshiIconColor (13x12 rgba16) */
Sprite dMNVSRecordMain_YoshiIconColor = {
	0, 0,
	13, 12,
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
	(Bitmap*)dMNVSRecordMain_YoshiIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
