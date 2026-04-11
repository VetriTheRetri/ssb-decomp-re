/* Sprite: TextBoxGLower */

/* Texture: TextBoxGLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxGLower_tex[] = {
    #include <SCStaffroll/TextBoxGLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxGLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxGLower_tex, 12, 0 },
};

/* Sprite: TextBoxGLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxGLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxGLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
