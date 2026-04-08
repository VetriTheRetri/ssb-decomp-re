/* Sprite: PokeballText */

Gfx dRelocFile29_PokeballText_dl[] = { gsSPEndDisplayList() };

/* Texture: PokeballText (57(64)x16 ia8) */
u8 dRelocFile29_PokeballText_tex[] = {
    #include <file_29/PokeballText.ia8.inc.c>
};

Bitmap dRelocFile29_PokeballText_bitmaps[] = {
	{ 57, 64, 0, 0, dRelocFile29_PokeballText_tex, 16, 0 },
};

/* Sprite: PokeballText (57x16 ia8) */
Sprite dRelocFile29_PokeballText = {
	0, 0,
	57, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_PokeballText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
