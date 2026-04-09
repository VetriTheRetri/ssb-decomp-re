/* Sprite: CPLevelText */

Gfx dMNPlayersCommon_CPLevelText_dl[] = { gsSPEndDisplayList() };

/* Texture: CPLevelText (25(32)x11 i4) */
u8 dMNPlayersCommon_CPLevelText_tex[] = {
    #include <MNPlayersCommon/CPLevelText.i4.inc.c>
};

Bitmap dMNPlayersCommon_CPLevelText_bitmaps[] = {
	{ 25, 32, 0, 0, dMNPlayersCommon_CPLevelText_tex, 11, 0 },
};

/* Sprite: CPLevelText (25x11 i4) */
Sprite dMNPlayersCommon_CPLevelText = {
	0, 0,
	25, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNPlayersCommon_CPLevelText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
