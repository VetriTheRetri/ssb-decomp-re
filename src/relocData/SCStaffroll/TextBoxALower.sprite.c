/* Sprite: TextBoxALower */

/* Texture: TextBoxALower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxALower_tex[] = {
    #include <SCStaffroll/TextBoxALower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxALower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxALower_tex, 11, 0 },
};

/* Sprite: TextBoxALower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxALower = {
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
	(Bitmap*)dSCStaffroll_TextBoxALower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
