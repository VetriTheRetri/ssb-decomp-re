/* Sprite: LinkSpecialHiName */

Gfx dMNCharacters_LinkSpecialHiName_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkSpecialHiName (64x7 i4) */
u8 dMNCharacters_LinkSpecialHiName_tex[] = {
    #include <MNCharacters/LinkSpecialHiName.i4.inc.c>
};

Bitmap dMNCharacters_LinkSpecialHiName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_LinkSpecialHiName_tex, 7, 0 },
};

/* Sprite: LinkSpecialHiName (64x7 i4) */
Sprite dMNCharacters_LinkSpecialHiName = {
	0, 0,
	64, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNCharacters_LinkSpecialHiName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
