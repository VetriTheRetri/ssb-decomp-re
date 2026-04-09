/* Sprite: StartText */

Gfx dMNPlayersCommon_StartText_dl[] = { gsSPEndDisplayList() };

/* Texture: StartText (25(32)x5 i4) */
u8 dMNPlayersCommon_StartText_tex[] = {
    #include <MNPlayersCommon/StartText.i4.inc.c>
};

Bitmap dMNPlayersCommon_StartText_bitmaps[] = {
	{ 25, 32, 0, 0, dMNPlayersCommon_StartText_tex, 5, 0 },
};

/* Sprite: StartText (25x5 i4) */
Sprite dMNPlayersCommon_StartText = {
	0, 0,
	25, 5,
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
	(Bitmap*)dMNPlayersCommon_StartText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
