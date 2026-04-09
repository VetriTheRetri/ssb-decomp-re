/* Sprite: Sec */

Gfx dMNPlayers1PMode_Sec_dl[] = { gsSPEndDisplayList() };

/* Texture: Sec (3(8)x4 ia8) */
u8 dMNPlayers1PMode_Sec_tex[] = {
    #include <MNPlayers1PMode/Sec.ia8.inc.c>
};

Bitmap dMNPlayers1PMode_Sec_bitmaps[] = {
	{ 3, 8, 0, 0, dMNPlayers1PMode_Sec_tex, 4, 0 },
};

/* Sprite: Sec (3x4 ia8) */
Sprite dMNPlayers1PMode_Sec = {
	0, 0,
	3, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	4, 4,
	3, 1,
	(Bitmap*)dMNPlayers1PMode_Sec_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
