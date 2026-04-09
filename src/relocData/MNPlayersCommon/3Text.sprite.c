/* Sprite: 3Text */

Gfx dMNPlayersCommon_3Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 3Text (5(16)x5 i4) */
u8 dMNPlayersCommon_3Text_tex[] = {
    #include <MNPlayersCommon/3Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_3Text_bitmaps[] = {
	{ 5, 16, 0, 0, dMNPlayersCommon_3Text_tex, 5, 0 },
};

/* Sprite: 3Text (5x5 i4) */
Sprite dMNPlayersCommon_3Text = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_3Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
