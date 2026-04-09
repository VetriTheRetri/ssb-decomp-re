/* Sprite: CursorHandPoint */

Gfx dMNPlayersCommon_CursorHandPoint_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandPoint (27(28)x36 ia16) */
u8 dMNPlayersCommon_CursorHandPoint_tex[] = {
    #include <MNPlayersCommon/CursorHandPoint.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandPoint_bitmaps[] = {
	{ 27, 28, 0, 0, dMNPlayersCommon_CursorHandPoint_tex, 36, 0 },
};

/* Sprite: CursorHandPoint (27x36 ia16) */
Sprite dMNPlayersCommon_CursorHandPoint = {
	0, 0,
	27, 36,
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
	(Bitmap*)dMNPlayersCommon_CursorHandPoint_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
