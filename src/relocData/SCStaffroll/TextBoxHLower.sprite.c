/* Sprite: TextBoxHLower */

/* Texture: TextBoxHLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxHLower_tex[] = {
    #include <SCStaffroll/TextBoxHLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxHLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxHLower_tex, 13, 0 },
};

/* Sprite: TextBoxHLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxHLower = {
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
	(Bitmap*)dSCStaffroll_TextBoxHLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
