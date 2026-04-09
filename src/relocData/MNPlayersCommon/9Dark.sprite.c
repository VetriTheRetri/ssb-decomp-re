/* Sprite: 9Dark */

Gfx dMNPlayersCommon_9Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 9Dark (9(16)x11 ia8) */
u8 dMNPlayersCommon_9Dark_tex[] = {
    #include <MNPlayersCommon/9Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_9Dark_bitmaps[] = {
	{ 9, 16, 0, 0, dMNPlayersCommon_9Dark_tex, 11, 0 },
};

/* Sprite: 9Dark (9x11 ia8) */
Sprite dMNPlayersCommon_9Dark = {
	0, 0,
	9, 11,
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
	(Bitmap*)dMNPlayersCommon_9Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
