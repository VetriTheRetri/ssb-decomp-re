/* Sprite: 6Dark */

Gfx dMNPlayersCommon_6Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 6Dark (9(16)x11 ia8) */
u8 dMNPlayersCommon_6Dark_tex[] = {
    #include <MNPlayersCommon/6Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_6Dark_bitmaps[] = {
	{ 9, 16, 0, 0, dMNPlayersCommon_6Dark_tex, 11, 0 },
};

/* Sprite: 6Dark (9x11 ia8) */
Sprite dMNPlayersCommon_6Dark = {
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
	(Bitmap*)dMNPlayersCommon_6Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
