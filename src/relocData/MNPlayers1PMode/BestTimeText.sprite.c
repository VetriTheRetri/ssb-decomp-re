/* Sprite: BestTimeText */

Gfx dMNPlayers1PMode_BestTimeText_dl[] = { gsSPEndDisplayList() };

/* Texture: BestTimeText (40(48)x5 i4) */
u8 dMNPlayers1PMode_BestTimeText_tex[] = {
    #include <MNPlayers1PMode/BestTimeText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_BestTimeText_bitmaps[] = {
	{ 40, 48, 0, 0, dMNPlayers1PMode_BestTimeText_tex, 5, 0 },
};

/* Sprite: BestTimeText (40x5 i4) */
Sprite dMNPlayers1PMode_BestTimeText = {
	0, 0,
	40, 5,
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
	(Bitmap*)dMNPlayers1PMode_BestTimeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
