/* Sprite: Digit4 */

Gfx dMNCommon_Digit4_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit4 (10(16)x13 i4) */
u8 dMNCommon_Digit4_tex[] = {
    #include <MNCommon/Digit4.i4.inc.c>
};

Bitmap dMNCommon_Digit4_bitmaps[] = {
	{ 10, 16, 0, 0, dMNCommon_Digit4_tex, 13, 0 },
};

/* Sprite: Digit4 (10x13 i4) */
Sprite dMNCommon_Digit4 = {
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
	(Bitmap*)dMNCommon_Digit4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
