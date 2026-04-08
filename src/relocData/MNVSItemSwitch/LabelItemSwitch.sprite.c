/* Sprite: LabelItemSwitch */

Gfx dMNVSItemSwitch_LabelItemSwitch_dl[] = { gsSPEndDisplayList() };

/* Texture: LabelItemSwitch (71(80)x7 i4) */
u8 dMNVSItemSwitch_LabelItemSwitch_tex[] = {
    #include <MNVSItemSwitch/LabelItemSwitch.i4.inc.c>
};

Bitmap dMNVSItemSwitch_LabelItemSwitch_bitmaps[] = {
	{ 71, 80, 0, 0, dMNVSItemSwitch_LabelItemSwitch_tex, 7, 0 },
};

/* Sprite: LabelItemSwitch (71x7 i4) */
Sprite dMNVSItemSwitch_LabelItemSwitch = {
	0, 0,
	71, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_LabelItemSwitch_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
