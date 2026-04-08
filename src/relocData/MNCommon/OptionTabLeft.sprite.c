/* Sprite: OptionTabLeft */

Gfx dMNCommon_OptionTabLeft_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionTabLeft (16x29 ia8) */
u8 dMNCommon_OptionTabLeft_tex[] = {
    #include <MNCommon/OptionTabLeft.ia8.inc.c>
};

Bitmap dMNCommon_OptionTabLeft_bitmaps[] = {
	{ 16, 16, 0, 0, dMNCommon_OptionTabLeft_tex, 29, 0 },
};

/* Sprite: OptionTabLeft (16x29 ia8) */
Sprite dMNCommon_OptionTabLeft = {
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
	(Bitmap*)dMNCommon_OptionTabLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
