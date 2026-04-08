/* Sprite: OptionText */

Gfx dMNMain_OptionText_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionText (64x13 i4) */
u8 dMNMain_OptionText_tex[] = {
    #include <MNMain/OptionText.i4.inc.c>
};

Bitmap dMNMain_OptionText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNMain_OptionText_tex, 13, 0 },
};

/* Sprite: OptionText (64x13 i4) */
Sprite dMNMain_OptionText = {
	0, 0,
	64, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNMain_OptionText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
