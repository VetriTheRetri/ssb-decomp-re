/* Sprite: PushText */

Gfx dMNPlayersCommon_PushText_dl[] = { gsSPEndDisplayList() };

/* Texture: PushText (19(32)x5 i4) */
u8 dMNPlayersCommon_PushText_tex[] = {
    #include <MNPlayersCommon/PushText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PushText_bitmaps[] = {
	{ 19, 32, 0, 0, dMNPlayersCommon_PushText_tex, 5, 0 },
};

/* Sprite: PushText (19x5 i4) */
Sprite dMNPlayersCommon_PushText = {
	0, 0,
	19, 5,
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
	(Bitmap*)dMNPlayersCommon_PushText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
