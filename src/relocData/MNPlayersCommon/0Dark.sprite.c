/* Sprite: 0Dark */

Gfx dMNPlayersCommon_0Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 0Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_0Dark_tex[] = {
    #include <MNPlayersCommon/0Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_0Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_0Dark_tex, 11, 0 },
};

/* Sprite: 0Dark (10x11 ia8) */
Sprite dMNPlayersCommon_0Dark = {
	0, 0,
	10, 11,
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
	(Bitmap*)dMNPlayersCommon_0Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
