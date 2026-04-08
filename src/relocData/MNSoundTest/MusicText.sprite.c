/* Sprite: MusicText */

Gfx dMNSoundTest_MusicText_dl[] = { gsSPEndDisplayList() };

/* Texture: MusicText (61(64)x33 i4) */
u8 dMNSoundTest_MusicText_tex[] = {
    #include <MNSoundTest/MusicText.i4.inc.c>
};

Bitmap dMNSoundTest_MusicText_bitmaps[] = {
	{ 61, 64, 0, 0, dMNSoundTest_MusicText_tex, 33, 0 },
};

/* Sprite: MusicText (61x33 i4) */
Sprite dMNSoundTest_MusicText = {
	0, 0,
	61, 33,
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
	(Bitmap*)dMNSoundTest_MusicText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
