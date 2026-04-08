/* Sprite: Donkey */

Gfx dFTEmblemSprites_Donkey_dl[] = { gsSPEndDisplayList() };

/* Texture: Donkey (64x48 i4) */
u8 dFTEmblemSprites_Donkey_tex[] = {
    #include <FTEmblemSprites/Donkey.i4.inc.c>
};

Bitmap dFTEmblemSprites_Donkey_bitmaps[] = {
	{ 64, 64, 0, 0, dFTEmblemSprites_Donkey_tex, 48, 0 },
};

/* Sprite: Donkey (64x48 i4) */
Sprite dFTEmblemSprites_Donkey = {
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
	(Bitmap*)dFTEmblemSprites_Donkey_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
