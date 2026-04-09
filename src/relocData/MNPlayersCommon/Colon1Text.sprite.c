/* Sprite: Colon1Text */

Gfx dMNPlayersCommon_Colon1Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon1Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon1Text_tex[] = {
    #include <MNPlayersCommon/Colon1Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon1Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon1Text_tex, 5, 0 },
};

/* Sprite: Colon1Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon1Text = {
	0, 0,
	7, 5,
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
	(Bitmap*)dMNPlayersCommon_Colon1Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
