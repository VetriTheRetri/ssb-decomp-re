/* Sprite: FightBackground */

/* Texture: FightBackground (300(304)x220 ci4, 19 tiles) */
u8 dMNCommon_FightBackground_tex[] = {
    #include <MNCommon/FightBackground.ci4.inc.c>
};

Bitmap dMNCommon_FightBackground_bitmaps[] = {
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x728, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0xE50, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x1578, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x1CA0, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x23C8, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x2AF0, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x3218, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x3940, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x4068, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x4790, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x4EB8, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x55E0, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x5D08, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x6430, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x6B58, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x7280, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x79A8, 12, 0 },
	{ 300, 304, 0, 0, dMNCommon_FightBackground_tex + 0x80D0, 4, 0 },
};

/* Sprite: FightBackground (300x220 ci4) */
Sprite dMNCommon_FightBackground = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x2DC12D60,
	0, 1,
	19, 252,
	12, 12,
	2, 0,
	(Bitmap*)dMNCommon_FightBackground_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
