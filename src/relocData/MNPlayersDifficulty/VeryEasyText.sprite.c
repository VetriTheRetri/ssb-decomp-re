/* Sprite: VeryEasyText */

Gfx dMNPlayersDifficulty_VeryEasyText_dl[] = { gsSPEndDisplayList() };

/* Texture: VeryEasyText (61(64)x8 i4) */
u8 dMNPlayersDifficulty_VeryEasyText_tex[] = {
    #include <MNPlayersDifficulty/VeryEasyText.i4.inc.c>
};

Bitmap dMNPlayersDifficulty_VeryEasyText_bitmaps[] = {
	{ 61, 64, 0, 0, dMNPlayersDifficulty_VeryEasyText_tex, 8, 0 },
};

/* Sprite: VeryEasyText (61x8 i4) */
Sprite dMNPlayersDifficulty_VeryEasyText = {
	0, 0,
	61, 8,
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
	(Bitmap*)dMNPlayersDifficulty_VeryEasyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
