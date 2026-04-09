/* Sprite: 2Text */

Gfx dMNPlayersCommon_2Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 2Text (4(16)x5 i4) */
u8 dMNPlayersCommon_2Text_tex[] = {
    #include <MNPlayersCommon/2Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_2Text_bitmaps[] = {
	{ 4, 16, 0, 0, dMNPlayersCommon_2Text_tex, 5, 0 },
};

/* Sprite: 2Text (4x5 i4) */
Sprite dMNPlayersCommon_2Text = {
	0, 0,
	4, 5,
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
	(Bitmap*)dMNPlayersCommon_2Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
