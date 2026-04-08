/* Sprite: SoundTestText */

Gfx dMNSoundTest_SoundTestText_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTestText (125(128)x14 ia8) */
u8 dMNSoundTest_SoundTestText_tex[] = {
    #include <MNSoundTest/SoundTestText.ia8.inc.c>
};

Bitmap dMNSoundTest_SoundTestText_bitmaps[] = {
	{ 125, 128, 0, 0, dMNSoundTest_SoundTestText_tex, 14, 0 },
};

/* Sprite: SoundTestText (125x14 ia8) */
Sprite dMNSoundTest_SoundTestText = {
	0, 0,
	125, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	3, 1,
	(Bitmap*)dMNSoundTest_SoundTestText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
