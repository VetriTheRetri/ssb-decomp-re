/* Sprite: LogoAnimStrikeV */

Gfx dMNTitle_LogoAnimStrikeV_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimStrikeV (30(32)x124 i4c) */
u8 dMNTitle_LogoAnimStrikeV_tex[] = {
    #include <MNTitle/LogoAnimStrikeV.i4c.inc.c>
};

Bitmap dMNTitle_LogoAnimStrikeV_bitmaps[] = {
	{ 30, 32, 0, 0, dMNTitle_LogoAnimStrikeV_tex, 124, 0 },
};

/* Sprite: LogoAnimStrikeV (30x124 i4c) */
Sprite dMNTitle_LogoAnimStrikeV = {
	0, 0,
	30, 124,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	124, 124,
	4, 4,
	(Bitmap*)dMNTitle_LogoAnimStrikeV_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
