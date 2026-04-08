/* Sprite: PokeballTextJap */

Gfx dRelocFile29_PokeballTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: PokeballTextJap (77(80)x12 i4) */
u8 dRelocFile29_PokeballTextJap_tex[] = {
    #include <file_29/PokeballTextJap.i4.inc.c>
};

Bitmap dRelocFile29_PokeballTextJap_bitmaps[] = {
	{ 77, 80, 0, 0, dRelocFile29_PokeballTextJap_tex, 12, 0 },
};

/* Sprite: PokeballTextJap (77x12 i4) */
Sprite dRelocFile29_PokeballTextJap = {
	0, 0,
	77, 12,
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
	4, 0,
	(Bitmap*)dRelocFile29_PokeballTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
