/* Sprite: CharactersText */

Gfx dMNData_CharactersText_dl[] = { gsSPEndDisplayList() };

/* Texture: CharactersText (110(112)x17 i4) */
u8 dMNData_CharactersText_tex[] = {
    #include <MNData/CharactersText.i4.inc.c>
};

Bitmap dMNData_CharactersText_bitmaps[] = {
	{ 110, 112, 0, 0, dMNData_CharactersText_tex, 17, 0 },
};

/* Sprite: CharactersText (110x17 i4) */
Sprite dMNData_CharactersText = {
	0, 0,
	110, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNData_CharactersText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
