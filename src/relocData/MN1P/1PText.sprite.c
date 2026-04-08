/* Sprite: 1PText */

Gfx dMN1P_1PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PText (26(32)x30 i4) */
u8 dMN1P_1PText_tex[] = {
    #include <MN1P/1PText.i4.inc.c>
};

Bitmap dMN1P_1PText_bitmaps[] = {
	{ 26, 32, 0, 0, dMN1P_1PText_tex, 30, 0 },
};

/* Sprite: 1PText (26x30 i4) */
Sprite dMN1P_1PText = {
	0, 0,
	26, 30,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	30, 30,
	4, 0,
	(Bitmap*)dMN1P_1PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
