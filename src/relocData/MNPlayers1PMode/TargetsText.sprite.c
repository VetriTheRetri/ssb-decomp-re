/* Sprite: TargetsText */

Gfx dMNPlayers1PMode_TargetsText_dl[] = { gsSPEndDisplayList() };

/* Texture: TargetsText (95(96)x10 i4) */
u8 dMNPlayers1PMode_TargetsText_tex[] = {
    #include <MNPlayers1PMode/TargetsText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_TargetsText_bitmaps[] = {
	{ 95, 96, 0, 0, dMNPlayers1PMode_TargetsText_tex, 10, 0 },
};

/* Sprite: TargetsText (95x10 i4) */
Sprite dMNPlayers1PMode_TargetsText = {
	0, 0,
	95, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_TargetsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
