/* Sprite: SoundText */

Gfx dMNOption_SoundText_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundText (61(64)x17 i4) */
u8 dMNOption_SoundText_tex[] = {
    #include <MNOption/SoundText.i4.inc.c>
};

Bitmap dMNOption_SoundText_bitmaps[] = {
	{ 61, 64, 0, 0, dMNOption_SoundText_tex, 17, 0 },
};

/* Sprite: SoundText (61x17 i4) */
Sprite dMNOption_SoundText = {
	0, 0,
	61, 17,
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
	(Bitmap*)dMNOption_SoundText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
