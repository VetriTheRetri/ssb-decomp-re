/* Sprite: Digit7 */

Gfx dMNCommon_Digit7_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit7 (10(16)x13 i4) */
u8 dMNCommon_Digit7_tex[] = {
    #include <MNCommon/Digit7.i4.inc.c>
};

Bitmap dMNCommon_Digit7_bitmaps[] = {
	{ 10, 16, 0, 0, dMNCommon_Digit7_tex, 13, 0 },
};

/* Sprite: Digit7 (10x13 i4) */
Sprite dMNCommon_Digit7 = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNCommon_Digit7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
