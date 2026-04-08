/* Sprite: MotionSpecialLwInput */

Gfx dMNCharacters_MotionSpecialLwInput_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSpecialLwInput (24(32)x7 i4) */
u8 dMNCharacters_MotionSpecialLwInput_tex[] = {
    #include <MNCharacters/MotionSpecialLwInput.i4.inc.c>
};

Bitmap dMNCharacters_MotionSpecialLwInput_bitmaps[] = {
	{ 24, 32, 0, 0, dMNCharacters_MotionSpecialLwInput_tex, 7, 0 },
};

/* Sprite: MotionSpecialLwInput (24x7 i4) */
Sprite dMNCharacters_MotionSpecialLwInput = {
	0, 0,
	24, 7,
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
	(Bitmap*)dMNCharacters_MotionSpecialLwInput_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
