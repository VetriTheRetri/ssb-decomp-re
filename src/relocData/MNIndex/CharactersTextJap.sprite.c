/* Sprite: CharactersTextJap */

Gfx dMNIndex_CharactersTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: CharactersTextJap (112x15 ia8) */
u8 dMNIndex_CharactersTextJap_tex[] = {
    #include <MNIndex/CharactersTextJap.ia8.inc.c>
};

Bitmap dMNIndex_CharactersTextJap_bitmaps[] = {
	{ 112, 112, 0, 0, dMNIndex_CharactersTextJap_tex, 15, 0 },
};

/* Sprite: CharactersTextJap (112x15 ia8) */
Sprite dMNIndex_CharactersTextJap = {
	0, 0,
	112, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNIndex_CharactersTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
