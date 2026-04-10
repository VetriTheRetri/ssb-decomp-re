/* Sprite: LogoAnimCutout */

Gfx dMNTitle_LogoAnimCutout_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimCutout (300(304)x239 i4, 20 tiles) */
u8 dMNTitle_LogoAnimCutout_tex[] = {
    #include <MNTitle/LogoAnimCutout.i4.inc.c>
};

Bitmap dMNTitle_LogoAnimCutout_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x728, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0xE50, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x1578, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x1CA0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x23C8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x2AF0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x3218, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x3940, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4068, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4790, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4EB8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x55E0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x5D08, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x6430, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x6B58, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x7280, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x79A8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x80D0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x87F8, 11, 0 },
};

/* Sprite: LogoAnimCutout (300x220 i4) */
Sprite dMNTitle_LogoAnimCutout = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	20, 264,
	11, 12,
	4, 0,
	(Bitmap*)dMNTitle_LogoAnimCutout_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
