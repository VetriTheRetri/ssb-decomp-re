/* Sprite: TextBoxFLower */

/* Texture: TextBoxFLower (9(16)x13 i4c) */
u8 dSCStaffroll_TextBoxFLower_tex[] = {
    #include <SCStaffroll/TextBoxFLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxFLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxFLower_tex, 13, 0 },
};

/* Sprite: TextBoxFLower (9x13 i4c) */
Sprite dSCStaffroll_TextBoxFLower = {
	0, 0,
	9, 13,
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
	(Bitmap*)dSCStaffroll_TextBoxFLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
