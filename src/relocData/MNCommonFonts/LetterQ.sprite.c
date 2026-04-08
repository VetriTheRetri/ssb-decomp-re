/* Sprite: LetterQ */

Gfx dMNCommonFonts_LetterQ_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterQ (5(16)x5 i4) */
u8 dMNCommonFonts_LetterQ_tex[] = {
    #include <MNCommonFonts/LetterQ.i4.inc.c>
};

Bitmap dMNCommonFonts_LetterQ_bitmaps[] = {
	{ 5, 16, 0, 0, dMNCommonFonts_LetterQ_tex, 5, 0 },
};

/* Sprite: LetterQ (5x5 i4) */
Sprite dMNCommonFonts_LetterQ = {
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
	4, 0,
	(Bitmap*)dMNCommonFonts_LetterQ_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
