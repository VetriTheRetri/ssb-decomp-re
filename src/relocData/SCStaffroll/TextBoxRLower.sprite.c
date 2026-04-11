/* Sprite: TextBoxRLower */

/* Texture: TextBoxRLower (9(16)x11 i4c) */
u8 dSCStaffroll_TextBoxRLower_tex[] = {
    #include <SCStaffroll/TextBoxRLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxRLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxRLower_tex, 11, 0 },
};

/* Sprite: TextBoxRLower (9x11 i4c) */
Sprite dSCStaffroll_TextBoxRLower = {
	0, 0,
	9, 11,
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
	(Bitmap*)dSCStaffroll_TextBoxRLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
