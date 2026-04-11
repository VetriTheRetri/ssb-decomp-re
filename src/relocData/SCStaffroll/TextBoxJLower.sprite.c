/* Sprite: TextBoxJLower */

/* Texture: TextBoxJLower (6(16)x14 i4c) */
u8 dSCStaffroll_TextBoxJLower_tex[] = {
    #include <SCStaffroll/TextBoxJLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxJLower_bitmaps[] = {
	{ 6, 16, 0, 0, dSCStaffroll_TextBoxJLower_tex, 14, 0 },
};

/* Sprite: TextBoxJLower (6x14 i4c) */
Sprite dSCStaffroll_TextBoxJLower = {
	0, 0,
	6, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxJLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
