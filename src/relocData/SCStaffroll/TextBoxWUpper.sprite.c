/* Sprite: TextBoxWUpper */

/* Texture: TextBoxWUpper (14(16)x14 i4c) */
u8 dSCStaffroll_TextBoxWUpper_tex[] = {
    #include <SCStaffroll/TextBoxWUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxWUpper_bitmaps[] = {
	{ 14, 16, 0, 0, dSCStaffroll_TextBoxWUpper_tex, 14, 0 },
};

/* Sprite: TextBoxWUpper (14x14 i4c) */
Sprite dSCStaffroll_TextBoxWUpper = {
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
	(Bitmap*)dSCStaffroll_TextBoxWUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
