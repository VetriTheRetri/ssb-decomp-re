/* Sprite: Slash */

Gfx dMNCommon_Slash_dl[] = { gsSPEndDisplayList() };

/* Texture: Slash (7(16)x14 i4) */
u8 dMNCommon_Slash_tex[] = {
    #include <MNCommon/Slash.i4.inc.c>
};

Bitmap dMNCommon_Slash_bitmaps[] = {
	{ 7, 16, 0, 0, dMNCommon_Slash_tex, 14, 0 },
};

/* Sprite: Slash (7x14 i4) */
Sprite dMNCommon_Slash = {
	0, 0,
	7, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNCommon_Slash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
