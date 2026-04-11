/* Sprite: TextBoxIUpper */

/* Texture: TextBoxIUpper (5(16)x14 i4c) */
u8 dSCStaffroll_TextBoxIUpper_tex[] = {
    #include <SCStaffroll/TextBoxIUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxIUpper_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxIUpper_tex, 14, 0 },
};

/* Sprite: TextBoxIUpper (5x14 i4c) */
Sprite dSCStaffroll_TextBoxIUpper = {
	0, 0,
	5, 14,
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
	(Bitmap*)dSCStaffroll_TextBoxIUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
