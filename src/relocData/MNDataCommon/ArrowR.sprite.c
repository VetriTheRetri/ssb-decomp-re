/* Sprite: ArrowR */

Gfx dMNDataCommon_ArrowR_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowR (14(16)x7 i4) */
u8 dMNDataCommon_ArrowR_tex[] = {
    #include <MNDataCommon/ArrowR.i4.inc.c>
};

Bitmap dMNDataCommon_ArrowR_bitmaps[] = {
	{ 14, 16, 0, 0, dMNDataCommon_ArrowR_tex, 7, 0 },
};

/* Sprite: ArrowR (14x7 i4) */
Sprite dMNDataCommon_ArrowR = {
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
	(Bitmap*)dMNDataCommon_ArrowR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
