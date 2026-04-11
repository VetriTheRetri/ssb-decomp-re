/* Sprite: TextBoxTLower */

/* Texture: TextBoxTLower (9(16)x13 i4c) */
u8 dSCStaffroll_TextBoxTLower_tex[] = {
    #include <SCStaffroll/TextBoxTLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxTLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxTLower_tex, 13, 0 },
};

/* Sprite: TextBoxTLower (9x13 i4c) */
Sprite dSCStaffroll_TextBoxTLower = {
	0, 0,
	9, 13,
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
	(Bitmap*)dSCStaffroll_TextBoxTLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
