/* Sprite: TextBoxSlash */

Gfx dSCStaffroll_TextBoxSlash_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxSlash (6(16)x12 i4c) */
u8 dSCStaffroll_TextBoxSlash_tex[] = {
    #include <SCStaffroll/TextBoxSlash.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxSlash_bitmaps[] = {
	{ 6, 16, 0, 0, dSCStaffroll_TextBoxSlash_tex, 12, 0 },
};

/* Sprite: TextBoxSlash (6x12 i4c) */
Sprite dSCStaffroll_TextBoxSlash = {
	0, 0,
	6, 12,
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
	(Bitmap*)dSCStaffroll_TextBoxSlash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
