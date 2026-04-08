/* Sprite: MotionSpecialNInput */

Gfx dMNCharacters_MotionSpecialNInput_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSpecialNInput (27(32)x7 i4) */
u8 dMNCharacters_MotionSpecialNInput_tex[] = {
    #include <MNCharacters/MotionSpecialNInput.i4.inc.c>
};

Bitmap dMNCharacters_MotionSpecialNInput_bitmaps[] = {
	{ 27, 32, 0, 0, dMNCharacters_MotionSpecialNInput_tex, 7, 0 },
};

/* Sprite: MotionSpecialNInput (27x7 i4) */
Sprite dMNCharacters_MotionSpecialNInput = {
	0, 0,
	27, 7,
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
	(Bitmap*)dMNCharacters_MotionSpecialNInput_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
