/* Sprite: SoundTestText */

Gfx dMNData_SoundTestText_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTestText (111(112)x17 i4) */
u8 dMNData_SoundTestText_tex[] = {
    #include <MNData/SoundTestText.i4.inc.c>
};

Bitmap dMNData_SoundTestText_bitmaps[] = {
	{ 111, 112, 0, 0, dMNData_SoundTestText_tex, 17, 0 },
};

/* Sprite: SoundTestText (111x17 i4) */
Sprite dMNData_SoundTestText = {
	0, 0,
	111, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNData_SoundTestText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
