/* Sprite: OffText */

Gfx dMNCommon_OffText_dl[] = { gsSPEndDisplayList() };

/* Texture: OffText (30(32)x14 i4) */
u8 dMNCommon_OffText_tex[] = {
    #include <MNCommon/OffText.i4.inc.c>
};

Bitmap dMNCommon_OffText_bitmaps[] = {
	{ 30, 32, 0, 0, dMNCommon_OffText_tex, 14, 0 },
};

/* Sprite: OffText (30x14 i4) */
Sprite dMNCommon_OffText = {
	0, 0,
	30, 14,
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
	(Bitmap*)dMNCommon_OffText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
