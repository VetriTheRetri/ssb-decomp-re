/* Sprite: ButtonText */

Gfx dMNPlayersCommon_ButtonText_dl[] = { gsSPEndDisplayList() };

/* Texture: ButtonText (29(32)x5 i4) */
u8 dMNPlayersCommon_ButtonText_tex[] = {
    #include <MNPlayersCommon/ButtonText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ButtonText_bitmaps[] = {
	{ 29, 32, 0, 0, dMNPlayersCommon_ButtonText_tex, 5, 0 },
};

/* Sprite: ButtonText (29x5 i4) */
Sprite dMNPlayersCommon_ButtonText = {
	0, 0,
	29, 5,
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
	(Bitmap*)dMNPlayersCommon_ButtonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
