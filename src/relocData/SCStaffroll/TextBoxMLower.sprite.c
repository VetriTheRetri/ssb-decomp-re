/* Sprite: TextBoxMLower */

/* Texture: TextBoxMLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxMLower_tex[] = {
    #include <SCStaffroll/TextBoxMLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxMLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxMLower_tex, 11, 0 },
};

/* Sprite: TextBoxMLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxMLower = {
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
	(Bitmap*)dSCStaffroll_TextBoxMLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
