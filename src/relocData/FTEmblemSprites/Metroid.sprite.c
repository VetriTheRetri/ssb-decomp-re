/* Sprite: Metroid */

Gfx dFTEmblemSprites_Metroid_dl[] = { gsSPEndDisplayList() };

/* Texture: Metroid (64x48 i4) */
u8 dFTEmblemSprites_Metroid_tex[] = {
    #include <FTEmblemSprites/Metroid.i4.inc.c>
};

Bitmap dFTEmblemSprites_Metroid_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_Metroid_tex, 48, 0 },
};

/* Sprite: Metroid (64x48 i4) */
Sprite dFTEmblemSprites_Metroid = {
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
	(Bitmap*)dFTEmblemSprites_Metroid_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
