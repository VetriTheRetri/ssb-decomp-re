/* Sprite: FoxIconColor */

Gfx dMNVSRecordMain_FoxIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxIconColor (14(16)x12 rgba16) */
u8 dMNVSRecordMain_FoxIconColor_tex[] = {
    #include <MNVSRecordMain/FoxIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_FoxIconColor_bitmaps[] = {
	{ 14, 16, 0, 0, dMNVSRecordMain_FoxIconColor_tex, 12, 0 },
};

/* Sprite: FoxIconColor (14x12 rgba16) */
Sprite dMNVSRecordMain_FoxIconColor = {
	0, 0,
	14, 12,
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
	(Bitmap*)dMNVSRecordMain_FoxIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
