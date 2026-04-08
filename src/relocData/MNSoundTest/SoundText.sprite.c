/* Sprite: SoundText */

Gfx dMNSoundTest_SoundText_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundText (72(80)x33 i4) */
u8 dMNSoundTest_SoundText_tex[] = {
    #include <MNSoundTest/SoundText.i4.inc.c>
};

Bitmap dMNSoundTest_SoundText_bitmaps[] = {
	{ 72, 80, 0, 0, dMNSoundTest_SoundText_tex, 33, 0 },
};

/* Sprite: SoundText (72x33 i4) */
Sprite dMNSoundTest_SoundText = {
	0, 0,
	72, 33,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	33, 33,
	4, 0,
	(Bitmap*)dMNSoundTest_SoundText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
