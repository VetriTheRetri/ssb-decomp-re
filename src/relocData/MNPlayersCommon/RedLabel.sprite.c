/* Sprite: RedLabel */

Gfx dMNPlayersCommon_RedLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: RedLabel (24x10 rgba32) */
u8 dMNPlayersCommon_RedLabel_tex[] = {
    #include <MNPlayersCommon/RedLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_RedLabel_bitmaps[] = {
	{ 24, 24, 0, 0, dMNPlayersCommon_RedLabel_tex, 10, 0 },
};

/* Sprite: RedLabel (24x10 rgba32) */
Sprite dMNPlayersCommon_RedLabel = {
	0, 0,
	24, 10,
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
	(Bitmap*)dMNPlayersCommon_RedLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
