/* Sprite: 1Dark */

Gfx dMNPlayersCommon_1Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 1Dark (7(8)x11 ia8) */
u8 dMNPlayersCommon_1Dark_tex[] = {
    #include <MNPlayersCommon/1Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_1Dark_bitmaps[] = {
	{ 7, 8, 0, 0, dMNPlayersCommon_1Dark_tex, 11, 0 },
};

/* Sprite: 1Dark (7x11 ia8) */
Sprite dMNPlayersCommon_1Dark = {
	0, 0,
	7, 11,
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
	3, 1,
	(Bitmap*)dMNPlayersCommon_1Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
