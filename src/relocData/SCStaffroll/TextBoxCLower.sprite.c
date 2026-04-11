/* Sprite: TextBoxCLower */

/* Texture: TextBoxCLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxCLower_tex[] = {
    #include <SCStaffroll/TextBoxCLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxCLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxCLower_tex, 11, 0 },
};

/* Sprite: TextBoxCLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxCLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxCLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
