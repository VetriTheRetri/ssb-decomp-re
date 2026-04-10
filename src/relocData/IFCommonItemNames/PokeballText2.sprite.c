/* Sprite: PokeballText2 */

Gfx dIFCommonItemNames_PokeballText2_dl[] = { gsSPEndDisplayList() };

/* Texture: PokeballText2 (54(56)x15 ia8) */
u8 dIFCommonItemNames_PokeballText2_tex[] = {
    #include <IFCommonItemNames/PokeballText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_PokeballText2_bitmaps[] = {
	{ 54, 56, 0, 0, dIFCommonItemNames_PokeballText2_tex, 15, 0 },
};

/* Sprite: PokeballText2 (54x15 ia8) */
Sprite dIFCommonItemNames_PokeballText2 = {
	0, 0,
	54, 15,
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
	(Bitmap*)dIFCommonItemNames_PokeballText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
