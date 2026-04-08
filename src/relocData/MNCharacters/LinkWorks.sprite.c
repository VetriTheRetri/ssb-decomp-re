/* Sprite: LinkWorks */

Gfx dMNCharacters_LinkWorks_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkWorks (152(160)x32 i4) */
u8 dMNCharacters_LinkWorks_tex[] = {
    #include <MNCharacters/LinkWorks.i4.inc.c>
};

Bitmap dMNCharacters_LinkWorks_bitmaps[] = {
	{ 152, 160, 0, 0, dMNCharacters_LinkWorks_tex, 32, 0 },
};

/* Sprite: LinkWorks (152x32 i4) */
Sprite dMNCharacters_LinkWorks = {
	0, 0,
	152, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dMNCharacters_LinkWorks_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
