/* Sprite: DataIconDark */

Gfx dMNMain_DataIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: DataIconDark (51(64)x51 i4) */
u8 dMNMain_DataIconDark_tex[] = {
    #include <MNMain/DataIconDark.i4.inc.c>
};

Bitmap dMNMain_DataIconDark_bitmaps[] = {
	{ 51, 64, 0, 0, dMNMain_DataIconDark_tex, 51, 0 },
};

/* Sprite: DataIconDark (51x51 i4) */
Sprite dMNMain_DataIconDark = {
	0, 0,
	51, 51,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	51, 51,
	4, 0,
	(Bitmap*)dMNMain_DataIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
