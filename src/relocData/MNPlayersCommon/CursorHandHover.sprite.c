/* Sprite: CursorHandHover */

Gfx dMNPlayersCommon_CursorHandHover_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandHover (35(36)x36 ia16) */
u8 dMNPlayersCommon_CursorHandHover_tex[] = {
    #include <MNPlayersCommon/CursorHandHover.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandHover_bitmaps[] = {
	{ 35, 36, 0, 0, dMNPlayersCommon_CursorHandHover_tex, 36, 0 },
};

/* Sprite: CursorHandHover (35x36 ia16) */
Sprite dMNPlayersCommon_CursorHandHover = {
	0, 0,
	35, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 2,
	(Bitmap*)dMNPlayersCommon_CursorHandHover_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
