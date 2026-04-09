/* Sprite: CPText */

Gfx dMNPlayersCommon_CPText_dl[] = { gsSPEndDisplayList() };

/* Texture: CPText (43(48)x16 i4) */
u8 dMNPlayersCommon_CPText_tex[] = {
    #include <MNPlayersCommon/CPText.i4.inc.c>
};

Bitmap dMNPlayersCommon_CPText_bitmaps[] = {
	{ 43, 48, 0, 0, dMNPlayersCommon_CPText_tex, 16, 0 },
};

/* Sprite: CPText (43x16 i4) */
Sprite dMNPlayersCommon_CPText = {
	0, 0,
	43, 16,
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
	(Bitmap*)dMNPlayersCommon_CPText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
