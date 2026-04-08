/* Sprite: ArrowL */

Gfx dMNCommon_ArrowL_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowL (9(16)x7 i4) */
u8 dMNCommon_ArrowL_tex[] = {
    #include <MNCommon/ArrowL.i4.inc.c>
};

Bitmap dMNCommon_ArrowL_bitmaps[] = {
	{ 9, 16, 0, 0, dMNCommon_ArrowL_tex, 7, 0 },
};

/* Sprite: ArrowL (9x7 i4) */
Sprite dMNCommon_ArrowL = {
	0, 0,
	9, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNCommon_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
