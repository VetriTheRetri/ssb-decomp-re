/* Sprite: FoxText */

Gfx dMNPlayersCommon_FoxText_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxText (30(32)x16 ia8) */
u8 dMNPlayersCommon_FoxText_tex[] = {
    #include <MNPlayersCommon/FoxText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_FoxText_bitmaps[] = {
	{ 30, 32, 0, 0, dMNPlayersCommon_FoxText_tex, 16, 0 },
};

/* Sprite: FoxText (30x16 ia8) */
Sprite dMNPlayersCommon_FoxText = {
	0, 0,
	30, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dMNPlayersCommon_FoxText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
