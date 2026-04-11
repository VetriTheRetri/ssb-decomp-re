/* Sprite: TextBoxDash */

/* Texture: TextBoxDash (9(16)x4 i4c) */
u8 dSCStaffroll_TextBoxDash_tex[] = {
    #include <SCStaffroll/TextBoxDash.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxDash_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxDash_tex, 4, 0 },
};

/* Sprite: TextBoxDash (9x4 i4c) */
Sprite dSCStaffroll_TextBoxDash = {
	0, 0,
	9, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	4, 4,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxDash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
