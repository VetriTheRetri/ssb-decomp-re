/* Sprite: OnText */

Gfx dMNCommon_OnText_dl[] = { gsSPEndDisplayList() };

/* Texture: OnText (25(32)x14 i4) */
u8 dMNCommon_OnText_tex[] = {
    #include <MNCommon/OnText.i4.inc.c>
};

Bitmap dMNCommon_OnText_bitmaps[] = {
	{ 25, 32, 0, 0, dMNCommon_OnText_tex, 14, 0 },
};

/* Sprite: OnText (25x14 i4) */
Sprite dMNCommon_OnText = {
	0, 0,
	25, 14,
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
	(Bitmap*)dMNCommon_OnText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
