/* Sprite: NormalText */

Gfx dMNPlayersDifficulty_NormalText_dl[] = { gsSPEndDisplayList() };

/* Texture: NormalText (50(64)x8 i4) */
u8 dMNPlayersDifficulty_NormalText_tex[] = {
    #include <MNPlayersDifficulty/NormalText.i4.inc.c>
};

Bitmap dMNPlayersDifficulty_NormalText_bitmaps[] = {
	{ 50, 64, 0, 0, dMNPlayersDifficulty_NormalText_tex, 8, 0 },
};

/* Sprite: NormalText (50x8 i4) */
Sprite dMNPlayersDifficulty_NormalText = {
	0, 0,
	50, 8,
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
	(Bitmap*)dMNPlayersDifficulty_NormalText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
