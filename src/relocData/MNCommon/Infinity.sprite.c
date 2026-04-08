/* Sprite: Infinity */

Gfx dMNCommon_Infinity_dl[] = { gsSPEndDisplayList() };

/* Texture: Infinity (23(32)x11 i4) */
u8 dMNCommon_Infinity_tex[] = {
    #include <MNCommon/Infinity.i4.inc.c>
};

Bitmap dMNCommon_Infinity_bitmaps[] = {
	{ 23, 32, 0, 0, dMNCommon_Infinity_tex, 11, 0 },
};

/* Sprite: Infinity (23x11 i4) */
Sprite dMNCommon_Infinity = {
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
	4, 0,
	(Bitmap*)dMNCommon_Infinity_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
