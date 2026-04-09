/* Sprite: OptionOutline */

Gfx dMNPlayers1PMode_OptionOutline_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionOutline (192x32 i4c) */
u8 dMNPlayers1PMode_OptionOutline_tex[] = {
    #include <MNPlayers1PMode/OptionOutline.i4c.inc.c>
};

Bitmap dMNPlayers1PMode_OptionOutline_bitmaps[] = {
	{ 192, 192, 0, 0, dMNPlayers1PMode_OptionOutline_tex, 32, 0 },
};

/* Sprite: OptionOutline (192x32 i4c) */
Sprite dMNPlayers1PMode_OptionOutline = {
	0, 0,
	192, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 4,
	(Bitmap*)dMNPlayers1PMode_OptionOutline_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
