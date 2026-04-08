/* Sprite: LinkName */

Gfx dMNCharacters_LinkName_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkName (48x40 i4c) */
u8 dMNCharacters_LinkName_tex[] = {
    #include <MNCharacters/LinkName.i4c.inc.c>
};

Bitmap dMNCharacters_LinkName_bitmaps[] = {
	{ 48, 48, 0, 0, dMNCharacters_LinkName_tex, 40, 0 },
};

/* Sprite: LinkName (48x40 i4c) */
Sprite dMNCharacters_LinkName = {
	0, 0,
	48, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	4, 4,
	(Bitmap*)dMNCharacters_LinkName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
