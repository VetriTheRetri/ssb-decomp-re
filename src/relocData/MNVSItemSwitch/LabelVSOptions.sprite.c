/* Sprite: LabelVSOptions */

Gfx dMNVSItemSwitch_LabelVSOptions_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelVSOptions (133(136)x18 ia8) */
u8 dMNVSItemSwitch_LabelVSOptions_tex[] = {
    #include <MNVSItemSwitch/LabelVSOptions.ia8.inc.c>
};

Bitmap dMNVSItemSwitch_LabelVSOptions_bitmaps[] = {
	{ 133, 136, 0, 0, dMNVSItemSwitch_LabelVSOptions_tex, 18, 0 },
};

/* Sprite: LabelVSOptions (133x18 ia8) */
Sprite dMNVSItemSwitch_LabelVSOptions = {
	0, 0,
	133, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNVSItemSwitch_LabelVSOptions_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
