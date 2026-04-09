/* Sprite: KirbyText */

Gfx dMNPlayersCommon_KirbyText_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyText (41(48)x15 ia8) */
u8 dMNPlayersCommon_KirbyText_tex[] = {
    #include <MNPlayersCommon/KirbyText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_KirbyText_bitmaps[] = {
	{ 41, 48, 0, 0, dMNPlayersCommon_KirbyText_tex, 15, 0 },
};

/* Sprite: KirbyText (41x15 ia8) */
Sprite dMNPlayersCommon_KirbyText = {
	0, 0,
	41, 15,
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
	(Bitmap*)dMNPlayersCommon_KirbyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
