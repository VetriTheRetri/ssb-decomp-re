/* Sprite: ColonPlayText */

Gfx dMNSoundTest_ColonPlayText_dl[] = { gsSPEndDisplayList() };

/* Texture: ColonPlayText (34(48)x7 i4) */
u8 dMNSoundTest_ColonPlayText_tex[] = {
    #include <MNSoundTest/ColonPlayText.i4.inc.c>
};

Bitmap dMNSoundTest_ColonPlayText_bitmaps[] = {
	{ 34, 48, 0, 0, dMNSoundTest_ColonPlayText_tex, 7, 0 },
};

/* Sprite: ColonPlayText (34x7 i4) */
Sprite dMNSoundTest_ColonPlayText = {
	0, 0,
	34, 7,
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
	(Bitmap*)dMNSoundTest_ColonPlayText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
