/* Sprite: Colon */

Gfx dMNCommon_Colon_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon (3(16)x9 i4) */
u8 dMNCommon_Colon_tex[] = {
    #include <MNCommon/Colon.i4.inc.c>
};

Bitmap dMNCommon_Colon_bitmaps[] = {
	{ 3, 16, 0, 0, dMNCommon_Colon_tex, 9, 0 },
};

/* Sprite: Colon (3x9 i4) */
Sprite dMNCommon_Colon = {
	0, 0,
	3, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dMNCommon_Colon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
