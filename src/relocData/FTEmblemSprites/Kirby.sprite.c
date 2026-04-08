/* Sprite: Kirby */

Gfx dFTEmblemSprites_Kirby_dl[] = { gsSPEndDisplayList() };

/* Texture: Kirby (64x48 i4) */
u8 dFTEmblemSprites_Kirby_tex[] = {
    #include <FTEmblemSprites/Kirby.i4.inc.c>
};

Bitmap dFTEmblemSprites_Kirby_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_Kirby_tex, 48, 0 },
};

/* Sprite: Kirby (64x48 i4) */
Sprite dFTEmblemSprites_Kirby = {
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
	(Bitmap*)dFTEmblemSprites_Kirby_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
