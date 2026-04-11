/* Sprite: TextBoxWLower */

/* Texture: TextBoxWLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxWLower_tex[] = {
    #include <SCStaffroll/TextBoxWLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxWLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxWLower_tex, 11, 0 },
};

/* Sprite: TextBoxWLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxWLower = {
	0, 0,
	12, 11,
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
	(Bitmap*)dSCStaffroll_TextBoxWLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
