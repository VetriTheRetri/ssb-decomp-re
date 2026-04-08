/* Sprite: AutoText */

Gfx dMNCommon_AutoText_dl[] = { gsSPEndDisplayList() };

/* Texture: AutoText (32x11 i4) */
u8 dMNCommon_AutoText_tex[] = {
    #include <MNCommon/AutoText.i4.inc.c>
};

Bitmap dMNCommon_AutoText_bitmaps[] = {
	{ 32, 32, 0, 0, dMNCommon_AutoText_tex, 11, 0 },
};

/* Sprite: AutoText (32x11 i4) */
Sprite dMNCommon_AutoText = {
	0, 0,
	32, 11,
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
	4, 0,
	(Bitmap*)dMNCommon_AutoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
