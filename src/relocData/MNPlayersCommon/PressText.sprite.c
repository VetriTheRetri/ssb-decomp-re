/* Sprite: PressText */

Gfx dMNPlayersCommon_PressText_dl[] = { gsSPEndDisplayList() };

/* Texture: PressText (24(32)x5 i4) */
u8 dMNPlayersCommon_PressText_tex[] = {
    #include <MNPlayersCommon/PressText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PressText_bitmaps[] = {
	{ 24, 32, 0, 0, dMNPlayersCommon_PressText_tex, 5, 0 },
};

/* Sprite: PressText (24x5 i4) */
Sprite dMNPlayersCommon_PressText = {
	0, 0,
	24, 5,
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
	(Bitmap*)dMNPlayersCommon_PressText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
