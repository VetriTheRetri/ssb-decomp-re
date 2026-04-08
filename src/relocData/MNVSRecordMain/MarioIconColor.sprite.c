/* Sprite: MarioIconColor */

Gfx dMNVSRecordMain_MarioIconColor_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioIconColor (15(16)x12 rgba16) */
u8 dMNVSRecordMain_MarioIconColor_tex[] = {
    #include <MNVSRecordMain/MarioIconColor.rgba16.inc.c>
};

Bitmap dMNVSRecordMain_MarioIconColor_bitmaps[] = {
	{ 15, 16, 0, 0, dMNVSRecordMain_MarioIconColor_tex, 12, 0 },
};

/* Sprite: MarioIconColor (15x12 rgba16) */
Sprite dMNVSRecordMain_MarioIconColor = {
	0, 0,
	15, 12,
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
	(Bitmap*)dMNVSRecordMain_MarioIconColor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
