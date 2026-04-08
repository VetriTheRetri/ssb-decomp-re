/* Sprite: KirbyIconColor */

Gfx dMNVSRecordMain_KirbyIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyIconColor (23(24)x11 rgba16) */
u8 dMNVSRecordMain_KirbyIconColor_tex[] = {
    #include <MNVSRecordMain/KirbyIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_KirbyIconColor_bitmaps[] = {
	{ 23, 24, 0, 0, dMNVSRecordMain_KirbyIconColor_tex, 11, 0 },
};

/* Sprite: KirbyIconColor (23x11 rgba16) */
Sprite dMNVSRecordMain_KirbyIconColor = {
	0, 0,
	23, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	0, 2,
	(Bitmap*)dMNVSRecordMain_KirbyIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
