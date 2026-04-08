/* Sprite: 1PGameText */

Gfx dMN1P_1PGameText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PGameText (88(96)x21 i4) */
u8 dMN1P_1PGameText_tex[] = {
    #include <MN1P/1PGameText.i4.inc.c>
};

Bitmap dMN1P_1PGameText_bitmaps[] = {
	{ 88, 96, 0, 0, dMN1P_1PGameText_tex, 21, 0 },
};

/* Sprite: 1PGameText (88x21 i4) */
Sprite dMN1P_1PGameText = {
	0, 0,
	88, 21,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	21, 21,
	4, 0,
	(Bitmap*)dMN1P_1PGameText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
