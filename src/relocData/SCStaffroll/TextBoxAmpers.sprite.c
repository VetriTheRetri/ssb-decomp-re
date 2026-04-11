/* Sprite: TextBoxAmpers */

/* Texture: TextBoxAmpers (16x14 i4c) */
u8 dSCStaffroll_TextBoxAmpers_tex[] = {
    #include <SCStaffroll/TextBoxAmpers.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxAmpers_bitmaps[] = {
	{ 16, 16, 0, 0, dSCStaffroll_TextBoxAmpers_tex, 14, 0 },
};

/* Sprite: TextBoxAmpers (16x14 i4c) */
Sprite dSCStaffroll_TextBoxAmpers = {
	0, 0,
	16, 14,
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
	(Bitmap*)dSCStaffroll_TextBoxAmpers_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
