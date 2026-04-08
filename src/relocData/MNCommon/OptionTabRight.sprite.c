/* Sprite: OptionTabRight */

Gfx dMNCommon_OptionTabRight_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionTabRight (16x29 ia8) */
u8 dMNCommon_OptionTabRight_tex[] = {
    #include <MNCommon/OptionTabRight.ia8.inc.c>
};

Bitmap dMNCommon_OptionTabRight_bitmaps[] = {
	{ 16, 16, 0, 0, dMNCommon_OptionTabRight_tex, 29, 0 },
};

/* Sprite: OptionTabRight (16x29 ia8) */
Sprite dMNCommon_OptionTabRight = {
	0, 0,
	16, 29,
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
	3, 1,
	(Bitmap*)dMNCommon_OptionTabRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
