/* Sprite: Digit8 */

Gfx dMNCommon_Digit8_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit8 (9(16)x13 i4) */
u8 dMNCommon_Digit8_tex[] = {
    #include <MNCommon/Digit8.i4.inc.c>
};

Bitmap dMNCommon_Digit8_bitmaps[] = {
	{ 9, 16, 0, 0, dMNCommon_Digit8_tex, 13, 0 },
};

/* Sprite: Digit8 (9x13 i4) */
Sprite dMNCommon_Digit8 = {
	0, 0,
	9, 13,
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
	(Bitmap*)dMNCommon_Digit8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
