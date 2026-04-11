/* Sprite: TextBoxFUpper */

/* Texture: TextBoxFUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxFUpper_tex[] = {
    #include <SCStaffroll/TextBoxFUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxFUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxFUpper_tex, 14, 0 },
};

/* Sprite: TextBoxFUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxFUpper = {
	0, 0,
	12, 14,
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
	(Bitmap*)dSCStaffroll_TextBoxFUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
