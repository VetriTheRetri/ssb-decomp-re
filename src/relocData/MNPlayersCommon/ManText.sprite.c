/* Sprite: ManText */

Gfx dMNPlayersCommon_ManText_dl[] = { gsSPEndDisplayList() };

/* Texture: ManText (16x5 i4) */
u8 dMNPlayersCommon_ManText_tex[] = {
    #include <MNPlayersCommon/ManText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ManText_bitmaps[] = {
	{ 16, 16, 0, 0, dMNPlayersCommon_ManText_tex, 5, 0 },
};

/* Sprite: ManText (16x5 i4) */
Sprite dMNPlayersCommon_ManText = {
	0, 0,
	16, 5,
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
	(Bitmap*)dMNPlayersCommon_ManText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
