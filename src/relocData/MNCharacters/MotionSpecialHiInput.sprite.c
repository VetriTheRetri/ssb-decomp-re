/* Sprite: MotionSpecialHiInput */

Gfx dMNCharacters_MotionSpecialHiInput_dl[] = { gsSPEndDisplayList() };

/* Texture: MotionSpecialHiInput (24(32)x7 i4) */
u8 dMNCharacters_MotionSpecialHiInput_tex[] = {
    #include <MNCharacters/MotionSpecialHiInput.i4.inc.c>
};

Bitmap dMNCharacters_MotionSpecialHiInput_bitmaps[] = {
	{ 24, 32, 0, 0, dMNCharacters_MotionSpecialHiInput_tex, 7, 0 },
};

/* Sprite: MotionSpecialHiInput (24x7 i4) */
Sprite dMNCharacters_MotionSpecialHiInput = {
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
	(Bitmap*)dMNCharacters_MotionSpecialHiInput_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
