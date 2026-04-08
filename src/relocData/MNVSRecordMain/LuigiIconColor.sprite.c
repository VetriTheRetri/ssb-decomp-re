/* Sprite: LuigiIconColor */

Gfx dMNVSRecordMain_LuigiIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiIconColor (16x12 rgba16) */
u8 dMNVSRecordMain_LuigiIconColor_tex[] = {
    #include <MNVSRecordMain/LuigiIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_LuigiIconColor_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_LuigiIconColor_tex, 12, 0 },
};

/* Sprite: LuigiIconColor (16x12 rgba16) */
Sprite dMNVSRecordMain_LuigiIconColor = {
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
	(Bitmap*)dMNVSRecordMain_LuigiIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
