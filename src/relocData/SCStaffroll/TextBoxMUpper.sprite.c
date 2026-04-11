/* Sprite: TextBoxMUpper */

/* Texture: TextBoxMUpper (14(16)x14 i4c) */
u8 dSCStaffroll_TextBoxMUpper_tex[] = {
    #include <SCStaffroll/TextBoxMUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxMUpper_bitmaps[] = {
	{ 14, 16, 0, 0, dSCStaffroll_TextBoxMUpper_tex, 14, 0 },
};

/* Sprite: TextBoxMUpper (14x14 i4c) */
Sprite dSCStaffroll_TextBoxMUpper = {
	0, 0,
	14, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxMUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
