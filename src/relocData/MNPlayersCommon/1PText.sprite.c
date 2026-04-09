/* Sprite: 1PText */

Gfx dMNPlayersCommon_1PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PText (39(48)x16 i4) */
u8 dMNPlayersCommon_1PText_tex[] = {
    #include <MNPlayersCommon/1PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_1PText_bitmaps[] = {
	{ 39, 48, 0, 0, dMNPlayersCommon_1PText_tex, 16, 0 },
};

/* Sprite: 1PText (39x16 i4) */
Sprite dMNPlayersCommon_1PText = {
	0, 0,
	39, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dMNPlayersCommon_1PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
