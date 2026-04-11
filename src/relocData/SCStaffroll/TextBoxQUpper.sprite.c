/* Sprite: TextBoxQUpper */

/* Texture: TextBoxQUpper (13(16)x14 i4c) */
u8 dSCStaffroll_TextBoxQUpper_tex[] = {
    #include <SCStaffroll/TextBoxQUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQUpper_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBoxQUpper_tex, 14, 0 },
};

/* Sprite: TextBoxQUpper (13x14 i4c) */
Sprite dSCStaffroll_TextBoxQUpper = {
	0, 0,
	13, 14,
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
	(Bitmap*)dSCStaffroll_TextBoxQUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
