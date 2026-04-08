/* Sprite: LetterS */

Gfx dMNCommonFonts_LetterS_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterS (4(16)x5 i4) */
u8 dMNCommonFonts_LetterS_tex[] = {
    #include <MNCommonFonts/LetterS.i4.inc.c>
};

Bitmap dMNCommonFonts_LetterS_bitmaps[] = {
	{ 4, 16, 0, 0, dMNCommonFonts_LetterS_tex, 5, 0 },
};

/* Sprite: LetterS (4x5 i4) */
Sprite dMNCommonFonts_LetterS = {
	0, 0,
	4, 5,
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
	(Bitmap*)dMNCommonFonts_LetterS_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
