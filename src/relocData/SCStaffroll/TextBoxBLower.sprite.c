/* Sprite: TextBoxBLower */

/* Texture: TextBoxBLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxBLower_tex[] = {
    #include <SCStaffroll/TextBoxBLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxBLower_tex, 13, 0 },
};

/* Sprite: TextBoxBLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxBLower = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxBLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
