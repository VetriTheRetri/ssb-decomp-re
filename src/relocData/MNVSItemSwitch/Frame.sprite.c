/* Sprite: Frame */

Gfx dMNVSItemSwitch_Frame_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame (88(96)x25 i4c) */
u8 dMNVSItemSwitch_Frame_tex[] = {
    #include <MNVSItemSwitch/Frame.i4c.inc.c>
};

Bitmap dMNVSItemSwitch_Frame_bitmaps[] = {
	{ 88, 96, 0, 0, dMNVSItemSwitch_Frame_tex, 25, 0 },
};

/* Sprite: Frame (88x25 i4c) */
Sprite dMNVSItemSwitch_Frame = {
	0, 0,
	88, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 4,
	(Bitmap*)dMNVSItemSwitch_Frame_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
