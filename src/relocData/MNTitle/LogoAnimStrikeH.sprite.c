/* Sprite: LogoAnimStrikeH */

Gfx dMNTitle_LogoAnimStrikeH_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimStrikeH (128x12 i4c) */
u8 dMNTitle_LogoAnimStrikeH_tex[] = {
    #include <MNTitle/LogoAnimStrikeH.i4c.inc.c>
};

Bitmap dMNTitle_LogoAnimStrikeH_bitmaps[] = {
	{ 128, 128, 0, 0, dMNTitle_LogoAnimStrikeH_tex, 12, 0 },
};

/* Sprite: LogoAnimStrikeH (128x12 i4c) */
Sprite dMNTitle_LogoAnimStrikeH = {
	0, 0,
	128, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dMNTitle_LogoAnimStrikeH_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
