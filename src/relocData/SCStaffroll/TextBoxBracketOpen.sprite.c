/* Sprite: TextBoxBracketOpen */

Gfx dSCStaffroll_TextBoxBracketOpen_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxBracketOpen (7(16)x14 i4c) */
u8 dSCStaffroll_TextBoxBracketOpen_tex[] = {
    #include <SCStaffroll/TextBoxBracketOpen.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketOpen_bitmaps[] = {
	{ 7, 16, 0, 0, dSCStaffroll_TextBoxBracketOpen_tex, 14, 0 },
};

/* Sprite: TextBoxBracketOpen (7x14 i4c) */
Sprite dSCStaffroll_TextBoxBracketOpen = {
	0, 0,
	7, 14,
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
	(Bitmap*)dSCStaffroll_TextBoxBracketOpen_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
