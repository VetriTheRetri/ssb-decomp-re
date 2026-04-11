/* Sprite: BoardThePlatformsText */

Gfx dSC1PIntro_BoardThePlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: BoardThePlatformsText (194(208)x20 i4) */
u8 dSC1PIntro_BoardThePlatformsText_tex[] = {
    #include <SC1PIntro/BoardThePlatformsText.i4.inc.c>
};

Bitmap dSC1PIntro_BoardThePlatformsText_bitmaps[] = {
	{ 194, 208, 0, 0, dSC1PIntro_BoardThePlatformsText_tex, 20, 0 },
};

/* Sprite: BoardThePlatformsText (194x20 i4) */
Sprite dSC1PIntro_BoardThePlatformsText = {
	0, 0,
	194, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_BoardThePlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
