/* Sprite: 4PText */

Gfx dMNPlayersCommon_4PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 4PText (42(48)x16 i4) */
u8 dMNPlayersCommon_4PText_tex[] = {
    #include <MNPlayersCommon/4PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_4PText_bitmaps[] = {
	{ 42, 48, 0, 0, dMNPlayersCommon_4PText_tex, 16, 0 },
};

/* Sprite: 4PText (42x16 i4) */
Sprite dMNPlayersCommon_4PText = {
	0, 0,
	42, 16,
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
	(Bitmap*)dMNPlayersCommon_4PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
