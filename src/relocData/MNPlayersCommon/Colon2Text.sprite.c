/* Sprite: Colon2Text */

Gfx dMNPlayersCommon_Colon2Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon2Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon2Text_tex[] = {
    #include <MNPlayersCommon/Colon2Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon2Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon2Text_tex, 5, 0 },
};

/* Sprite: Colon2Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon2Text = {
	0, 0,
	7, 5,
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
	(Bitmap*)dMNPlayersCommon_Colon2Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
