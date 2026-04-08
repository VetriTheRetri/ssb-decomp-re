/* Sprite: LetterN */

Gfx dMNCommonFonts_LetterN_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterN (5(16)x5 i4) */
u8 dMNCommonFonts_LetterN_tex[] = {
    #include <MNCommonFonts/LetterN.i4.inc.c>
};

Bitmap dMNCommonFonts_LetterN_bitmaps[] = {
	{ 5, 16, 0, 0, dMNCommonFonts_LetterN_tex, 5, 0 },
};

/* Sprite: LetterN (5x5 i4) */
Sprite dMNCommonFonts_LetterN = {
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
	(Bitmap*)dMNCommonFonts_LetterN_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
