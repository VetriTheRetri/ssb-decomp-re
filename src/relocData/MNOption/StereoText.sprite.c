/* Sprite: StereoText */

Gfx dMNOption_StereoText_dl[] = { gsSPEndDisplayList() };

/* Texture: StereoText (50(64)x14 i4) */
u8 dMNOption_StereoText_tex[] = {
    #include <MNOption/StereoText.i4.inc.c>
};

Bitmap dMNOption_StereoText_bitmaps[] = {
	{ 50, 64, 0, 0, dMNOption_StereoText_tex, 14, 0 },
};

/* Sprite: StereoText (50x14 i4) */
Sprite dMNOption_StereoText = {
	0, 0,
	50, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNOption_StereoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
