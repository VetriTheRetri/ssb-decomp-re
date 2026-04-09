/* Sprite: 1Text */

Gfx dMNPlayersCommon_1Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 1Text (2(16)x5 i4) */
u8 dMNPlayersCommon_1Text_tex[] = {
    #include <MNPlayersCommon/1Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_1Text_bitmaps[] = {
	{ 2, 16, 0, 0, dMNPlayersCommon_1Text_tex, 5, 0 },
};

/* Sprite: 1Text (2x5 i4) */
Sprite dMNPlayersCommon_1Text = {
	0, 0,
	2, 5,
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
	(Bitmap*)dMNPlayersCommon_1Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
