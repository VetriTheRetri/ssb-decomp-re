/* Sprite: TimeSelector */

Gfx dMNPlayersCommon_TimeSelector_dl[] = { gsSPEndDisplayList() };

/* Texture: TimeSelector (90(92)x13 rgba16) */
u8 dMNPlayersCommon_TimeSelector_tex[] = {
    #include <MNPlayersCommon/TimeSelector.rgba16.inc.c>
};

Bitmap dMNPlayersCommon_TimeSelector_bitmaps[] = {
	{ 90, 92, 0, 0, dMNPlayersCommon_TimeSelector_tex, 13, 0 },
};

/* Sprite: TimeSelector (90x13 rgba16) */
Sprite dMNPlayersCommon_TimeSelector = {
	0, 0,
	90, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	0, 2,
	(Bitmap*)dMNPlayersCommon_TimeSelector_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
