/* Sprite: CaptainIconColor */

Gfx dMNVSRecordMain_CaptainIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainIconColor (23(24)x12 rgba16) */
u8 dMNVSRecordMain_CaptainIconColor_tex[] = {
    #include <MNVSRecordMain/CaptainIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_CaptainIconColor_bitmaps[] = {
	{ 23, 24, 0, 0, dMNVSRecordMain_CaptainIconColor_tex, 12, 0 },
};

/* Sprite: CaptainIconColor (23x12 rgba16) */
Sprite dMNVSRecordMain_CaptainIconColor = {
	0, 0,
	23, 12,
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
	(Bitmap*)dMNVSRecordMain_CaptainIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
