/* Sprite: SoundText */

Gfx dMNIndex_SoundText_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundText (67(80)x17 i4) */
u8 dMNIndex_SoundText_tex[] = {
    #include <MNIndex/SoundText.i4.inc.c>
};

Bitmap dMNIndex_SoundText_bitmaps[] = {
	{ 67, 80, 0, 0, dMNIndex_SoundText_tex, 17, 0 },
};

/* Sprite: SoundText (67x17 i4) */
Sprite dMNIndex_SoundText = {
	0, 0,
	67, 17,
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
	(Bitmap*)dMNIndex_SoundText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
