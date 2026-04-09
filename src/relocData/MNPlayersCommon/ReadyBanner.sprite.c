/* Sprite: ReadyBanner */

Gfx dMNPlayersCommon_ReadyBanner_dl[] = { gsSPEndDisplayList() };

/* Texture: ReadyBanner (8x17 ia8) */
u8 dMNPlayersCommon_ReadyBanner_tex[] = {
    #include <MNPlayersCommon/ReadyBanner.ia8.inc.c>
};

Bitmap dMNPlayersCommon_ReadyBanner_bitmaps[] = {
	{ 8, 8, 0, 0, dMNPlayersCommon_ReadyBanner_tex, 17, 0 },
};

/* Sprite: ReadyBanner (8x17 ia8) */
Sprite dMNPlayersCommon_ReadyBanner = {
	0, 0,
	8, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	3, 1,
	(Bitmap*)dMNPlayersCommon_ReadyBanner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
