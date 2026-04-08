/* Sprite: SamusIconColor */

Gfx dMNVSRecordMain_SamusIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusIconColor (23(24)x12 rgba16) */
u8 dMNVSRecordMain_SamusIconColor_tex[] = {
    #include <MNVSRecordMain/SamusIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_SamusIconColor_bitmaps[] = {
	{ 23, 24, 0, 0, dMNVSRecordMain_SamusIconColor_tex, 12, 0 },
};

/* Sprite: SamusIconColor (23x12 rgba16) */
Sprite dMNVSRecordMain_SamusIconColor = {
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
	(Bitmap*)dMNVSRecordMain_SamusIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
