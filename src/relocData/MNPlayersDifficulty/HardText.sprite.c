/* Sprite: HardText */

Gfx dMNPlayersDifficulty_HardText_dl[] = { gsSPEndDisplayList() };

/* Texture: HardText (32x8 i4) */
u8 dMNPlayersDifficulty_HardText_tex[] = {
    #include <MNPlayersDifficulty/HardText.i4.inc.c>
};

Bitmap dMNPlayersDifficulty_HardText_bitmaps[] = {
	{ 32, 32, 0, 0, dMNPlayersDifficulty_HardText_tex, 8, 0 },
};

/* Sprite: HardText (32x8 i4) */
Sprite dMNPlayersDifficulty_HardText = {
	0, 0,
	32, 8,
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
	(Bitmap*)dMNPlayersDifficulty_HardText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
