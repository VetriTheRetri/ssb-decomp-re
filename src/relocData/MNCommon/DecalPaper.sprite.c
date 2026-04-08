/* Sprite: DecalPaper */

Gfx dMNCommon_DecalPaper_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalPaper (85(96)x87 i4, 2 tiles) */
u8 dMNCommon_DecalPaper_tex[] = {
    #include <MNCommon/DecalPaper.i4.inc.c>
};

Bitmap dMNCommon_DecalPaper_bitmaps[] = {
	{ 85, 96, 0, 0, dMNCommon_DecalPaper_tex, 84, 0 },
	{ 85, 96, 0, 0, dMNCommon_DecalPaper_tex + 0xFC8, 3, 0 },
};

/* Sprite: DecalPaper (85x87 i4) */
Sprite dMNCommon_DecalPaper = {
	0, 0,
	85, 87,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	84, 84,
	4, 0,
	(Bitmap*)dMNCommon_DecalPaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
