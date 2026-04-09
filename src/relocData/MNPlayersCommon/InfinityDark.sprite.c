/* Sprite: InfinityDark */

Gfx dMNPlayersCommon_InfinityDark_dl[] = { gsSPEndDisplayList() };

/* Texture: InfinityDark (17(24)x9 ia8) */
u8 dMNPlayersCommon_InfinityDark_tex[] = {
    #include <MNPlayersCommon/InfinityDark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_InfinityDark_bitmaps[] = {
	{ 17, 24, 0, 0, dMNPlayersCommon_InfinityDark_tex, 9, 0 },
};

/* Sprite: InfinityDark (17x9 ia8) */
Sprite dMNPlayersCommon_InfinityDark = {
	0, 0,
	17, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	3, 1,
	(Bitmap*)dMNPlayersCommon_InfinityDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
