/* Sprite: CursorHandGrab */

Gfx dMNPlayersCommon_CursorHandGrab_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandGrab (30(32)x28 ia16) */
u8 dMNPlayersCommon_CursorHandGrab_tex[] = {
    #include <MNPlayersCommon/CursorHandGrab.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandGrab_bitmaps[] = {
	{ 30, 32, 0, 0, dMNPlayersCommon_CursorHandGrab_tex, 28, 0 },
};

/* Sprite: CursorHandGrab (30x28 ia16) */
Sprite dMNPlayersCommon_CursorHandGrab = {
	0, 0,
	30, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	3, 2,
	(Bitmap*)dMNPlayersCommon_CursorHandGrab_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
