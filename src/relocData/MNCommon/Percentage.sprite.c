/* Sprite: Percentage */

Gfx dMNCommon_Percentage_dl[] = { gsSPEndDisplayList() };

/* Texture: Percentage (14(16)x13 i4) */
u8 dMNCommon_Percentage_tex[] = {
    #include <MNCommon/Percentage.i4.inc.c>
};

Bitmap dMNCommon_Percentage_bitmaps[] = {
	{ 14, 16, 0, 0, dMNCommon_Percentage_tex, 13, 0 },
};

/* Sprite: Percentage (14x13 i4) */
Sprite dMNCommon_Percentage = {
	0, 0,
	14, 13,
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
	(Bitmap*)dMNCommon_Percentage_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
