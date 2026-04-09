/* Sprite: LevelColonText */

Gfx dMNPlayers1PMode_LevelColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: LevelColonText (45(48)x8 i4) */
u8 dMNPlayers1PMode_LevelColonText_tex[] = {
    #include <MNPlayers1PMode/LevelColonText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_LevelColonText_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayers1PMode_LevelColonText_tex, 8, 0 },
};

/* Sprite: LevelColonText (45x8 i4) */
Sprite dMNPlayers1PMode_LevelColonText = {
	0, 0,
	45, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_LevelColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
