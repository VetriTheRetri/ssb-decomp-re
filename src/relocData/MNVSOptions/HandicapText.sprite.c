/* Sprite: HandicapText */

Gfx dMNVSOptions_HandicapText_dl[] = { gsSPEndDisplayList() };

/* Texture: HandicapText (66(80)x15 i4) */
u8 dMNVSOptions_HandicapText_tex[] = {
    #include <MNVSOptions/HandicapText.i4.inc.c>
};

Bitmap dMNVSOptions_HandicapText_bitmaps[] = {
	{ 66, 80, 0, 0, dMNVSOptions_HandicapText_tex, 15, 0 },
};

/* Sprite: HandicapText (66x15 i4) */
Sprite dMNVSOptions_HandicapText = {
	0, 0,
	66, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	4, 0,
	(Bitmap*)dMNVSOptions_HandicapText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
