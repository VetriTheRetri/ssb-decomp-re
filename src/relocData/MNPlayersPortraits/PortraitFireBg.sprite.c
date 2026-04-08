/* Sprite: PortraitFireBg */

Gfx dMNPlayersPortraits_PortraitFireBg_dl[] = { gsSPEndDisplayList() };

/* Texture: PortraitFireBg (45(48)x44 rgba16, 2 tiles) */
u8 dMNPlayersPortraits_PortraitFireBg_tex[] = {
    #include <MNPlayersPortraits/PortraitFireBg.rgba16.inc.c>
};

Bitmap dMNPlayersPortraits_PortraitFireBg_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_PortraitFireBg_tex, 42, 0 },
	{ 45, 48, 0, 0, dMNPlayersPortraits_PortraitFireBg_tex + 0xFC8, 2, 0 },
};

/* Sprite: PortraitFireBg (45x43 rgba16) */
Sprite dMNPlayersPortraits_PortraitFireBg = {
	0, 0,
	45, 43,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	41, 42,
	0, 2,
	(Bitmap*)dMNPlayersPortraits_PortraitFireBg_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
