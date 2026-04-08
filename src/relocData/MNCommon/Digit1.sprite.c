/* Sprite: Digit1 */

Gfx dMNCommon_Digit1_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit1 (6(16)x13 i4) */
u8 dMNCommon_Digit1_tex[] = {
    #include <MNCommon/Digit1.i4.inc.c>
};

Bitmap dMNCommon_Digit1_bitmaps[] = {
	{ 6, 16, 0, 0, dMNCommon_Digit1_tex, 13, 0 },
};

/* Sprite: Digit1 (6x13 i4) */
Sprite dMNCommon_Digit1 = {
	0, 0,
	6, 13,
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
	(Bitmap*)dMNCommon_Digit1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
