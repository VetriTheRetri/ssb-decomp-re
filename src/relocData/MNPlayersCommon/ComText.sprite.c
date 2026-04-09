/* Sprite: ComText */

Gfx dMNPlayersCommon_ComText_dl[] = { gsSPEndDisplayList() };

/* Texture: ComText (15(16)x5 i4) */
u8 dMNPlayersCommon_ComText_tex[] = {
    #include <MNPlayersCommon/ComText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ComText_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_ComText_tex, 5, 0 },
};

/* Sprite: ComText (15x5 i4) */
Sprite dMNPlayersCommon_ComText = {
	0, 0,
	15, 5,
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
	(Bitmap*)dMNPlayersCommon_ComText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
