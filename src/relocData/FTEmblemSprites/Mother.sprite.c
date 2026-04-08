/* Sprite: Mother */

Gfx dFTEmblemSprites_Mother_dl[] = { gsSPEndDisplayList() };

/* Texture: Mother (64x48 i4) */
u8 dFTEmblemSprites_Mother_tex[] = {
    #include <FTEmblemSprites/Mother.i4.inc.c>
};

Bitmap dFTEmblemSprites_Mother_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_Mother_tex, 48, 0 },
};

/* Sprite: Mother (64x48 i4) */
Sprite dFTEmblemSprites_Mother = {
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
	(Bitmap*)dFTEmblemSprites_Mother_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
