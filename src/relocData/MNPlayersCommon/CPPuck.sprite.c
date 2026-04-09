/* Sprite: CPPuck */

Gfx dMNPlayersCommon_CPPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: CPPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_CPPuck_tex[] = {
    #include <MNPlayersCommon/CPPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_CPPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_CPPuck_tex, 24, 0 },
};

/* Sprite: CPPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_CPPuck = {
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
	(Bitmap*)dMNPlayersCommon_CPPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
