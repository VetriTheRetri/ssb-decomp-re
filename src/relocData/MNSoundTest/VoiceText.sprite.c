/* Sprite: VoiceText */

Gfx dMNSoundTest_VoiceText_dl[] = { gsSPEndDisplayList() };

/* Texture: VoiceText (63(64)x33 i4) */
u8 dMNSoundTest_VoiceText_tex[] = {
    #include <MNSoundTest/VoiceText.i4.inc.c>
};

Bitmap dMNSoundTest_VoiceText_bitmaps[] = {
	{ 63, 64, 0, 0, dMNSoundTest_VoiceText_tex, 33, 0 },
};

/* Sprite: VoiceText (63x33 i4) */
Sprite dMNSoundTest_VoiceText = {
	0, 0,
	63, 33,
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
	(Bitmap*)dMNSoundTest_VoiceText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
