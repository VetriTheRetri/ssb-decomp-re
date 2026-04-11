/* Sprite: TextBoxXUpper */

/* Texture: TextBoxXUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxXUpper_tex[] = {
    #include <SCStaffroll/TextBoxXUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxXUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxXUpper_tex, 14, 0 },
};

/* Sprite: TextBoxXUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxXUpper = {
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
	(Bitmap*)dSCStaffroll_TextBoxXUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
