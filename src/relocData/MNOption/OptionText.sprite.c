/* Sprite: OptionText */

Gfx dMNOption_OptionText_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionText (71(80)x68 i4) */
u8 dMNOption_OptionText_tex[] = {
    #include <MNOption/OptionText.i4.inc.c>
};

Bitmap dMNOption_OptionText_bitmaps[] = {
	{ 71, 80, 0, 0, dMNOption_OptionText_tex, 68, 0 },
};

/* Sprite: OptionText (71x68 i4) */
Sprite dMNOption_OptionText = {
	0, 0,
	71, 68,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	68, 68,
	4, 0,
	(Bitmap*)dMNOption_OptionText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
