/* Sprite: FZero */

Gfx dFTEmblemSprites_FZero_dl[] = { gsSPEndDisplayList() };

/* Texture: FZero (64x48 i4) */
u8 dFTEmblemSprites_FZero_tex[] = {
    #include <FTEmblemSprites/FZero.i4.inc.c>
};

Bitmap dFTEmblemSprites_FZero_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_FZero_tex, 48, 0 },
};

/* Sprite: FZero (64x48 i4) */
Sprite dFTEmblemSprites_FZero = {
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
	(Bitmap*)dFTEmblemSprites_FZero_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
