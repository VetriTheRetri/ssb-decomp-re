/* Sprite: ArrowL */

Gfx dMNDataCommon_ArrowL_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowL (14(16)x7 i4) */
u8 dMNDataCommon_ArrowL_tex[] = {
    #include <MNDataCommon/ArrowL.i4.inc.c>
};

Bitmap dMNDataCommon_ArrowL_bitmaps[] = {
	{ 14, 16, 0, 0, dMNDataCommon_ArrowL_tex, 7, 0 },
};

/* Sprite: ArrowL (14x7 i4) */
Sprite dMNDataCommon_ArrowL = {
	0, 0,
	14, 7,
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
	(Bitmap*)dMNDataCommon_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
