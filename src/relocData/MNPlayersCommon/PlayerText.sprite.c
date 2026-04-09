/* Sprite: PlayerText */

Gfx dMNPlayersCommon_PlayerText_dl[] = { gsSPEndDisplayList() };

/* Texture: PlayerText (32x5 i4) */
u8 dMNPlayersCommon_PlayerText_tex[] = {
    #include <MNPlayersCommon/PlayerText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PlayerText_bitmaps[] = {
	{ 32, 32, 0, 0, dMNPlayersCommon_PlayerText_tex, 5, 0 },
};

/* Sprite: PlayerText (32x5 i4) */
Sprite dMNPlayersCommon_PlayerText = {
	0, 0,
	32, 5,
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
	(Bitmap*)dMNPlayersCommon_PlayerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
