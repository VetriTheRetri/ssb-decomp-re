/* Sprite: TextBoxQLower */

/* Texture: TextBoxQLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxQLower_tex[] = {
    #include <SCStaffroll/TextBoxQLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxQLower_tex, 12, 0 },
};

/* Sprite: TextBoxQLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxQLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxQLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
