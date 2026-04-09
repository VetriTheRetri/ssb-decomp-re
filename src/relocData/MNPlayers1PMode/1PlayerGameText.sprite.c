/* Sprite: 1PlayerGameText */

Gfx dMNPlayers1PMode_1PlayerGameText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PlayerGameText (86(96)x11 i4) */
u8 dMNPlayers1PMode_1PlayerGameText_tex[] = {
    #include <MNPlayers1PMode/1PlayerGameText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_1PlayerGameText_bitmaps[] = {
	{ 86, 96, 0, 0, dMNPlayers1PMode_1PlayerGameText_tex, 11, 0 },
};

/* Sprite: 1PlayerGameText (86x11 i4) */
Sprite dMNPlayers1PMode_1PlayerGameText = {
	0, 0,
	86, 11,
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
	(Bitmap*)dMNPlayers1PMode_1PlayerGameText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
