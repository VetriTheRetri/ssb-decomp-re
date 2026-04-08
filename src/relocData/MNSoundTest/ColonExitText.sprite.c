/* Sprite: ColonExitText */

Gfx dMNSoundTest_ColonExitText_dl[] = { gsSPEndDisplayList() };

/* Texture: ColonExitText (29(32)x7 i4) */
u8 dMNSoundTest_ColonExitText_tex[] = {
    #include <MNSoundTest/ColonExitText.i4.inc.c>
};

Bitmap dMNSoundTest_ColonExitText_bitmaps[] = {
	{ 29, 32, 0, 0, dMNSoundTest_ColonExitText_tex, 7, 0 },
};

/* Sprite: ColonExitText (29x7 i4) */
Sprite dMNSoundTest_ColonExitText = {
	0, 0,
	29, 7,
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
	(Bitmap*)dMNSoundTest_ColonExitText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
