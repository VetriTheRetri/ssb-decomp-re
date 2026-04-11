/* Sprite: TextBoxSLower */

/* Texture: TextBoxSLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxSLower_tex[] = {
    #include <SCStaffroll/TextBoxSLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxSLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxSLower_tex, 11, 0 },
};

/* Sprite: TextBoxSLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxSLower = {
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
	(Bitmap*)dSCStaffroll_TextBoxSLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
