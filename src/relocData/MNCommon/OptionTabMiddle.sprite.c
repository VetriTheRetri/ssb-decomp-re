/* Sprite: OptionTabMiddle */

Gfx dMNCommon_OptionTabMiddle_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionTabMiddle (8(16)x29 ia4) */
u8 dMNCommon_OptionTabMiddle_tex[] = {
    #include <MNCommon/OptionTabMiddle.ia4.inc.c>
};

Bitmap dMNCommon_OptionTabMiddle_bitmaps[] = {
	{ 8, 16, 0, 0, dMNCommon_OptionTabMiddle_tex, 29, 0 },
};

/* Sprite: OptionTabMiddle (8x29 ia4) */
Sprite dMNCommon_OptionTabMiddle = {
	0, 0,
	8, 29,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	29, 29,
	3, 0,
	(Bitmap*)dMNCommon_OptionTabMiddle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
