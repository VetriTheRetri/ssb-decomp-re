/* Sprite: ColonFadeOutText */

Gfx dMNSoundTest_ColonFadeOutText_dl[] = { gsSPEndDisplayList() };

/* Texture: ColonFadeOutText (52(64)x7 i4) */
u8 dMNSoundTest_ColonFadeOutText_tex[] = {
    #include <MNSoundTest/ColonFadeOutText.i4.inc.c>
};

Bitmap dMNSoundTest_ColonFadeOutText_bitmaps[] = {
	{ 52, 64, 0, 0, dMNSoundTest_ColonFadeOutText_tex, 7, 0 },
};

/* Sprite: ColonFadeOutText (52x7 i4) */
Sprite dMNSoundTest_ColonFadeOutText = {
	0, 0,
	52, 7,
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
	(Bitmap*)dMNSoundTest_ColonFadeOutText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
