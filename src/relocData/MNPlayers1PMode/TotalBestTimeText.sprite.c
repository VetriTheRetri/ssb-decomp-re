/* Sprite: TotalBestTimeText */

Gfx dMNPlayers1PMode_TotalBestTimeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TotalBestTimeText (68(80)x5 i4) */
u8 dMNPlayers1PMode_TotalBestTimeText_tex[] = {
    #include <MNPlayers1PMode/TotalBestTimeText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_TotalBestTimeText_bitmaps[] = {
	{ 68, 80, 0, 0, dMNPlayers1PMode_TotalBestTimeText_tex, 5, 0 },
};

/* Sprite: TotalBestTimeText (68x5 i4) */
Sprite dMNPlayers1PMode_TotalBestTimeText = {
	0, 0,
	68, 5,
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
	(Bitmap*)dMNPlayers1PMode_TotalBestTimeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
