/* Sprite: CPLabel */

Gfx dMNPlayersCommon_CPLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: CPLabel (20x10 rgba32) */
u8 dMNPlayersCommon_CPLabel_tex[] = {
    #include <MNPlayersCommon/CPLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_CPLabel_bitmaps[] = {
	{ 20, 20, 0, 0, dMNPlayersCommon_CPLabel_tex, 10, 0 },
};

/* Sprite: CPLabel (20x10 rgba32) */
Sprite dMNPlayersCommon_CPLabel = {
	0, 0,
	20, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	0, 3,
	(Bitmap*)dMNPlayersCommon_CPLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
