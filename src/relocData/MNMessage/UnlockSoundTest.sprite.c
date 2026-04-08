/* Sprite: UnlockSoundTest */

Gfx dMNMessage_UnlockSoundTest_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockSoundTest (212(224)x29 i4, 2 tiles) */
u8 dMNMessage_UnlockSoundTest_tex[] = {
    #include <MNMessage/UnlockSoundTest.i4.inc.c>
};

Bitmap dMNMessage_UnlockSoundTest_bitmaps[] = {
	{ 212, 224, 0, 0, dMNMessage_UnlockSoundTest_tex, 18, 0 },
	{ 212, 224, 0, 0, dMNMessage_UnlockSoundTest_tex + 0x7E8, 11, 0 },
};

/* Sprite: UnlockSoundTest (212x28 i4) */
Sprite dMNMessage_UnlockSoundTest = {
	0, 0,
	212, 28,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	17, 18,
	4, 0,
	(Bitmap*)dMNMessage_UnlockSoundTest_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
