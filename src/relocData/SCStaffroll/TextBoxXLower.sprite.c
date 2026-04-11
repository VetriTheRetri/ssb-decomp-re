/* Sprite: TextBoxXLower */

/* Texture: TextBoxXLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxXLower_tex[] = {
    #include <SCStaffroll/TextBoxXLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxXLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxXLower_tex, 11, 0 },
};

/* Sprite: TextBoxXLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxXLower = {
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
	(Bitmap*)dSCStaffroll_TextBoxXLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
