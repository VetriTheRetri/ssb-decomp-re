/* Sprite: Label */

Gfx dMNCharacters_Label_dl[] = { gsSPEndDisplayList() };

/* Texture: Label (120x13 ia8) */
u8 dMNCharacters_Label_tex[] = {
    #include <MNCharacters/Label.ia8.inc.c>
};

Bitmap dMNCharacters_Label_bitmaps[] = {
	{ 120, 120, 0, 0, dMNCharacters_Label_tex, 13, 0 },
};

/* Sprite: Label (120x13 ia8) */
Sprite dMNCharacters_Label = {
	0, 0,
	120, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	3, 1,
	(Bitmap*)dMNCharacters_Label_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
