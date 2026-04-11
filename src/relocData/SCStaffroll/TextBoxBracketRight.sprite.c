/* Sprite: TextBoxBracketRight */

/* Texture: TextBoxBracketRight (9(16)x60 i4) */
u8 dSCStaffroll_TextBoxBracketRight_tex[] = {
    #include <SCStaffroll/TextBoxBracketRight.i4.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketRight_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxBracketRight_tex, 60, 0 },
};

/* Sprite: TextBoxBracketRight (9x60 i4) */
Sprite dSCStaffroll_TextBoxBracketRight = {
	0, 0,
	9, 60,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	60, 60,
	4, 0,
	(Bitmap*)dSCStaffroll_TextBoxBracketRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
