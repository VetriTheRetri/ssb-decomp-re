/* Sprite: 4Text */

Gfx dMNPlayersCommon_4Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 4Text (5(16)x5 i4) */
u8 dMNPlayersCommon_4Text_tex[] = {
    #include <MNPlayersCommon/4Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_4Text_bitmaps[] = {
	{ 5, 16, 0, 0, dMNPlayersCommon_4Text_tex, 5, 0 },
};

/* Sprite: 4Text (5x5 i4) */
Sprite dMNPlayersCommon_4Text = {
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
	(Bitmap*)dMNPlayersCommon_4Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
