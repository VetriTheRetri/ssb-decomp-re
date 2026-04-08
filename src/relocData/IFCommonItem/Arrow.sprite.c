/* Sprite: Arrow */

Gfx dIFCommonItem_Arrow_dl[] = { gsSPEndDisplayList() };

/* Texture: Arrow (9(16)x7 i4) */
u8 dIFCommonItem_Arrow_tex[] = {
    #include <IFCommonItem/Arrow.i4.inc.c>
};

Bitmap dIFCommonItem_Arrow_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonItem_Arrow_tex, 7, 0 },
};

/* Sprite: Arrow (9x7 i4) */
Sprite dIFCommonItem_Arrow = {
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
	(Bitmap*)dIFCommonItem_Arrow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
