/* Sprite: YoshiText */

Gfx dMNPlayersCommon_YoshiText_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiText (43(48)x15 ia8) */
u8 dMNPlayersCommon_YoshiText_tex[] = {
    #include <MNPlayersCommon/YoshiText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_YoshiText_bitmaps[] = {
	{ 43, 48, 0, 0, dMNPlayersCommon_YoshiText_tex, 15, 0 },
};

/* Sprite: YoshiText (43x15 ia8) */
Sprite dMNPlayersCommon_YoshiText = {
	0, 0,
	43, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_YoshiText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
