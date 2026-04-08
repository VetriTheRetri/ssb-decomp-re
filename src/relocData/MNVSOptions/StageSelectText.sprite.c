/* Sprite: StageSelectText */

Gfx dMNVSOptions_StageSelectText_dl[] = { gsSPEndDisplayList() };

/* Texture: StageSelectText (95(96)x17 i4) */
u8 dMNVSOptions_StageSelectText_tex[] = {
    #include <MNVSOptions/StageSelectText.i4.inc.c>
};

Bitmap dMNVSOptions_StageSelectText_bitmaps[] = {
	{ 95, 96, 0, 0, dMNVSOptions_StageSelectText_tex, 17, 0 },
};

/* Sprite: StageSelectText (95x17 i4) */
Sprite dMNVSOptions_StageSelectText = {
	0, 0,
	95, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNVSOptions_StageSelectText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
