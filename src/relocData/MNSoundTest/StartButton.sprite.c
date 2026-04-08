/* Sprite: StartButton */

Gfx dMNSoundTest_StartButton_dl[] = { gsSPEndDisplayList() };

/* Texture: StartButton (23(24)x13 ia8) */
u8 dMNSoundTest_StartButton_tex[] = {
    #include <MNSoundTest/StartButton.ia8.inc.c>
};

Bitmap dMNSoundTest_StartButton_bitmaps[] = {
	{ 23, 24, 0, 0, dMNSoundTest_StartButton_tex, 13, 0 },
};

/* Sprite: StartButton (23x13 ia8) */
Sprite dMNSoundTest_StartButton = {
	0, 0,
	23, 13,
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
	3, 1,
	(Bitmap*)dMNSoundTest_StartButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
