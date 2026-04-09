/* Sprite: NessText */

Gfx dMNPlayersCommon_NessText_dl[] = { gsSPEndDisplayList() };

/* Texture: NessText (36(40)x15 ia8) */
u8 dMNPlayersCommon_NessText_tex[] = {
    #include <MNPlayersCommon/NessText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_NessText_bitmaps[] = {
	{ 36, 40, 0, 0, dMNPlayersCommon_NessText_tex, 15, 0 },
};

/* Sprite: NessText (36x15 ia8) */
Sprite dMNPlayersCommon_NessText = {
	0, 0,
	36, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_NessText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
