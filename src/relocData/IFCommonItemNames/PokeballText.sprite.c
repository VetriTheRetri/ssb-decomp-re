/* Sprite: PokeballText */

Gfx dIFCommonItemNames_PokeballText_dl[] = { gsSPEndDisplayList() };

/* Texture: PokeballText (57(64)x16 ia8) */
u8 dIFCommonItemNames_PokeballText_tex[] = {
    #include <IFCommonItemNames/PokeballText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_PokeballText_bitmaps[] = {
	{ 57, 64, 0, 0, dIFCommonItemNames_PokeballText_tex, 16, 0 },
};

/* Sprite: PokeballText (57x16 ia8) */
Sprite dIFCommonItemNames_PokeballText = {
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
	(Bitmap*)dIFCommonItemNames_PokeballText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
