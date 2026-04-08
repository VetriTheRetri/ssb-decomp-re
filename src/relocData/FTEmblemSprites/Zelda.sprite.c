/* Sprite: Zelda */

Gfx dFTEmblemSprites_Zelda_dl[] = { gsSPEndDisplayList() };

/* Texture: Zelda (64x48 i4) */
u8 dFTEmblemSprites_Zelda_tex[] = {
    #include <FTEmblemSprites/Zelda.i4.inc.c>
};

Bitmap dFTEmblemSprites_Zelda_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_Zelda_tex, 48, 0 },
};

/* Sprite: Zelda (64x48 i4) */
Sprite dFTEmblemSprites_Zelda = {
	0, 0,
	64, 48,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	48, 48,
	4, 0,
	(Bitmap*)dFTEmblemSprites_Zelda_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
