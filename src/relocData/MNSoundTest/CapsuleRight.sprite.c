/* Sprite: CapsuleRight */

Gfx dMNSoundTest_CapsuleRight_dl[] = { gsSPEndDisplayList() };

/* Texture: CapsuleRight (32x41 i4) */
u8 dMNSoundTest_CapsuleRight_tex[] = {
    #include <MNSoundTest/CapsuleRight.i4.inc.c>
};

Bitmap dMNSoundTest_CapsuleRight_bitmaps[] = {
	{ 32, 32, 0, 0, dMNSoundTest_CapsuleRight_tex, 41, 0 },
};

/* Sprite: CapsuleRight (32x41 i4) */
Sprite dMNSoundTest_CapsuleRight = {
	0, 0,
	32, 41,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	41, 41,
	4, 0,
	(Bitmap*)dMNSoundTest_CapsuleRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
