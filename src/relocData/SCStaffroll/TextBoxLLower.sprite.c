/* Sprite: TextBoxLLower */

/* Texture: TextBoxLLower (4(16)x13 i4c) */
u8 dSCStaffroll_TextBoxLLower_tex[] = {
    #include <SCStaffroll/TextBoxLLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxLLower_bitmaps[] = {
	{ 4, 16, 0, 0, dSCStaffroll_TextBoxLLower_tex, 13, 0 },
};

/* Sprite: TextBoxLLower (4x13 i4c) */
Sprite dSCStaffroll_TextBoxLLower = {
	0, 0,
	4, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxLLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
