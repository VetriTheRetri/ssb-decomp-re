/* Sprite: TextBoxApostrophe */

Gfx dSCStaffroll_TextBoxApostrophe_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxApostrophe (5(16)x5 i4c) */
u8 dSCStaffroll_TextBoxApostrophe_tex[] = {
    #include <SCStaffroll/TextBoxApostrophe.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxApostrophe_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxApostrophe_tex, 5, 0 },
};

/* Sprite: TextBoxApostrophe (5x5 i4c) */
Sprite dSCStaffroll_TextBoxApostrophe = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxApostrophe_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
