/* Sprite: EasyText */

Gfx dMNPlayersDifficulty_EasyText_dl[] = { gsSPEndDisplayList() };

/* Texture: EasyText (31(32)x8 i4) */
u8 dMNPlayersDifficulty_EasyText_tex[] = {
    #include <MNPlayersDifficulty/EasyText.i4.inc.c>
};

Bitmap dMNPlayersDifficulty_EasyText_bitmaps[] = {
	{ 31, 32, 0, 0, dMNPlayersDifficulty_EasyText_tex, 8, 0 },
};

/* Sprite: EasyText (31x8 i4) */
Sprite dMNPlayersDifficulty_EasyText = {
	0, 0,
	31, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayersDifficulty_EasyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
