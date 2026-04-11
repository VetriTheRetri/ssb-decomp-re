/* Sprite: TextBoxBracketClose */

Gfx dSCStaffroll_TextBoxBracketClose_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxBracketClose (7(16)x14 i4c) */
u8 dSCStaffroll_TextBoxBracketClose_tex[] = {
    #include <SCStaffroll/TextBoxBracketClose.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketClose_bitmaps[] = {
	{ 7, 16, 0, 0, dSCStaffroll_TextBoxBracketClose_tex, 14, 0 },
};

/* Sprite: TextBoxBracketClose (7x14 i4c) */
Sprite dSCStaffroll_TextBoxBracketClose = {
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
	(Bitmap*)dSCStaffroll_TextBoxBracketClose_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
