/* Sprite: TextBoxColon */

/* Texture: TextBoxColon (5(16)x11 i4c) */
u8 dSCStaffroll_TextBoxColon_tex[] = {
    #include <SCStaffroll/TextBoxColon.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxColon_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxColon_tex, 11, 0 },
};

/* Sprite: TextBoxColon (5x11 i4c) */
Sprite dSCStaffroll_TextBoxColon = {
	0, 0,
	5, 11,
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
	(Bitmap*)dSCStaffroll_TextBoxColon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
