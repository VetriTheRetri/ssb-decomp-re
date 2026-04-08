/* Sprite: DataIconDark */

Gfx dMNIndex_DataIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: DataIconDark (144x136 i4, 3 tiles) */
u8 dMNIndex_DataIconDark_tex[] = {
    #include <MNIndex/DataIconDark.i4.inc.c>
};

Bitmap dMNIndex_DataIconDark_bitmaps[] = {
	{ 144, 144, 0, 0, dMNIndex_DataIconDark_tex, 56, 0 },
	{ 144, 144, 0, 0, dMNIndex_DataIconDark_tex + 0xFC8, 56, 0 },
	{ 144, 144, 0, 0, dMNIndex_DataIconDark_tex + 0x1F90, 24, 0 },
};

/* Sprite: DataIconDark (144x134 i4) */
Sprite dMNIndex_DataIconDark = {
	0, 0,
	144, 134,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	55, 56,
	4, 0,
	(Bitmap*)dMNIndex_DataIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
