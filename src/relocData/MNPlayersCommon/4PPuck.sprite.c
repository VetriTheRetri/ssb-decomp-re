/* Sprite: 4PPuck */

Gfx dMNPlayersCommon_4PPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: 4PPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_4PPuck_tex[] = {
    #include <MNPlayersCommon/4PPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_4PPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_4PPuck_tex, 24, 0 },
};

/* Sprite: 4PPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_4PPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_4PPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
