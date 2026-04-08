/* Sprite: Question */

Gfx dMNVSRecordMain_Question_dl[] = { gsSPEndDisplayList() };

/* Texture: Question (6(16)x11 i4) */
u8 dMNVSRecordMain_Question_tex[] = {
    #include <MNVSRecordMain/Question.i4.inc.c>
};

Bitmap dMNVSRecordMain_Question_bitmaps[] = {
	{ 6, 16, 0, 0, dMNVSRecordMain_Question_tex, 11, 0 },
};

/* Sprite: Question (6x11 i4) */
Sprite dMNVSRecordMain_Question = {
	0, 0,
	6, 11,
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
	4, 0,
	(Bitmap*)dMNVSRecordMain_Question_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
