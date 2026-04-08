/* Sprite: LinkIconColor */

Gfx dMNVSRecordMain_LinkIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkIconColor (17(20)x12 rgba16) */
u8 dMNVSRecordMain_LinkIconColor_tex[] = {
    #include <MNVSRecordMain/LinkIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_LinkIconColor_bitmaps[] = {
	{ 17, 20, 0, 0, dMNVSRecordMain_LinkIconColor_tex, 12, 0 },
};

/* Sprite: LinkIconColor (17x12 rgba16) */
Sprite dMNVSRecordMain_LinkIconColor = {
	0, 0,
	17, 12,
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
	(Bitmap*)dMNVSRecordMain_LinkIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
