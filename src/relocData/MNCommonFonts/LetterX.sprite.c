/* Sprite: LetterX */

Gfx dMNCommonFonts_LetterX_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterX (5(16)x5 i4) */
u8 dMNCommonFonts_LetterX_tex[] = {
    #include <MNCommonFonts/LetterX.i4.inc.c>
};

Bitmap dMNCommonFonts_LetterX_bitmaps[] = {
	{ 5, 16, 0, 0, dMNCommonFonts_LetterX_tex, 5, 0 },
};

/* Sprite: LetterX (5x5 i4) */
Sprite dMNCommonFonts_LetterX = {
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
	(Bitmap*)dMNCommonFonts_LetterX_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
