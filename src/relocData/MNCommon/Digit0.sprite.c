/* Sprite: Digit0 */

Gfx dMNCommon_Digit0_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit0 (10(16)x13 i4) */
u8 dMNCommon_Digit0_tex[] = {
    #include <MNCommon/Digit0.i4.inc.c>
};

Bitmap dMNCommon_Digit0_bitmaps[] = {
	{ 10, 16, 0, 0, dMNCommon_Digit0_tex, 13, 0 },
};

/* Sprite: Digit0 (10x13 i4) */
Sprite dMNCommon_Digit0 = {
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
	(Bitmap*)dMNCommon_Digit0_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
