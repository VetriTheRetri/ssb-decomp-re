/* Sprite: VeryHardText */

Gfx dMNPlayersDifficulty_VeryHardText_dl[] = { gsSPEndDisplayList() };

/* Texture: VeryHardText (62(64)x8 i4) */
u8 dMNPlayersDifficulty_VeryHardText_tex[] = {
    #include <MNPlayersDifficulty/VeryHardText.i4.inc.c>
};

Bitmap dMNPlayersDifficulty_VeryHardText_bitmaps[] = {
	{ 62, 64, 0, 0, dMNPlayersDifficulty_VeryHardText_tex, 8, 0 },
};

/* Sprite: VeryHardText (62x8 i4) */
Sprite dMNPlayersDifficulty_VeryHardText = {
	0, 0,
	62, 8,
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
	(Bitmap*)dMNPlayersDifficulty_VeryHardText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
