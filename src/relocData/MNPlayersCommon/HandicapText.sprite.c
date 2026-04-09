/* Sprite: HandicapText */

Gfx dMNPlayersCommon_HandicapText_dl[] = { gsSPEndDisplayList() };

/* Texture: HandicapText (24(32)x11 i4) */
u8 dMNPlayersCommon_HandicapText_tex[] = {
    #include <MNPlayersCommon/HandicapText.i4.inc.c>
};

Bitmap dMNPlayersCommon_HandicapText_bitmaps[] = {
	{ 24, 32, 0, 0, dMNPlayersCommon_HandicapText_tex, 11, 0 },
};

/* Sprite: HandicapText (24x11 i4) */
Sprite dMNPlayersCommon_HandicapText = {
	0, 0,
	24, 11,
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
	4, 0,
	(Bitmap*)dMNPlayersCommon_HandicapText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
