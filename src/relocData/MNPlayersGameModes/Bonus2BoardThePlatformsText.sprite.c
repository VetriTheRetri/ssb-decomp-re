/* Sprite: Bonus2BoardThePlatformsText */

Gfx dMNPlayersGameModes_Bonus2BoardThePlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: Bonus2BoardThePlatformsText (192x11 i4) */
u8 dMNPlayersGameModes_Bonus2BoardThePlatformsText_tex[] = {
    #include <MNPlayersGameModes/Bonus2BoardThePlatformsText.i4.inc.c>
};

Bitmap dMNPlayersGameModes_Bonus2BoardThePlatformsText_bitmaps[] = {
	{ 192, 192, 0, 0, dMNPlayersGameModes_Bonus2BoardThePlatformsText_tex, 11, 0 },
};

/* Sprite: Bonus2BoardThePlatformsText (192x11 i4) */
Sprite dMNPlayersGameModes_Bonus2BoardThePlatformsText = {
	0, 0,
	192, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNPlayersGameModes_Bonus2BoardThePlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
