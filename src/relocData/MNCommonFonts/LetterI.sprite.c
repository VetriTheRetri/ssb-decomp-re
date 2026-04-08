/* Sprite: LetterI */

Gfx dMNCommonFonts_LetterI_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterI (3(16)x5 i4) */
u8 dMNCommonFonts_LetterI_tex[] = {
    #include <MNCommonFonts/LetterI.i4.inc.c>
};

Bitmap dMNCommonFonts_LetterI_bitmaps[] = {
	{ 3, 16, 0, 0, dMNCommonFonts_LetterI_tex, 5, 0 },
};

/* Sprite: LetterI (3x5 i4) */
Sprite dMNCommonFonts_LetterI = {
	0, 0,
	3, 5,
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
	(Bitmap*)dMNCommonFonts_LetterI_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
