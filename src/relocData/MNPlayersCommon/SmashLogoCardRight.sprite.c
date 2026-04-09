/* Sprite: SmashLogoCardRight */

Gfx dMNPlayersCommon_SmashLogoCardRight_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogoCardRight (41(48)x93 ia8, 2 tiles) */
u8 dMNPlayersCommon_SmashLogoCardRight_tex[] = {
    #include <MNPlayersCommon/SmashLogoCardRight.ia8.inc.c>
};

Bitmap dMNPlayersCommon_SmashLogoCardRight_bitmaps[] = {
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardRight_tex, 85, 0 },
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardRight_tex + 0xFF8, 8, 0 },
};

/* Sprite: SmashLogoCardRight (41x92 ia8) */
Sprite dMNPlayersCommon_SmashLogoCardRight = {
	0, 0,
	41, 92,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	84, 85,
	3, 1,
	(Bitmap*)dMNPlayersCommon_SmashLogoCardRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
