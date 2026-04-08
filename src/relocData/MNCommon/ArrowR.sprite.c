/* Sprite: ArrowR */

Gfx dMNCommon_ArrowR_dl[] = { gsSPEndDisplayList() };

/* Texture: ArrowR (9(16)x7 i4) */
u8 dMNCommon_ArrowR_tex[] = {
    #include <MNCommon/ArrowR.i4.inc.c>
};

Bitmap dMNCommon_ArrowR_bitmaps[] = {
	{ 9, 16, 0, 0, dMNCommon_ArrowR_tex, 7, 0 },
};

/* Sprite: ArrowR (9x7 i4) */
Sprite dMNCommon_ArrowR = {
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
	(Bitmap*)dMNCommon_ArrowR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
