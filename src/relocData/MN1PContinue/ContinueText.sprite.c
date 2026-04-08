/* Sprite: ContinueText */

Gfx dMN1PContinue_ContinueText_dl[] = { gsSPEndDisplayList() };

/* Texture: ContinueText (192x33 ia8, 2 tiles) */
u8 dMN1PContinue_ContinueText_tex[] = {
    #include <MN1PContinue/ContinueText.ia8.inc.c>
};

Bitmap dMN1PContinue_ContinueText_bitmaps[] = {
	{ 192, 192, 0, 0, dMN1PContinue_ContinueText_tex, 21, 0 },
	{ 192, 192, 0, 0, dMN1PContinue_ContinueText_tex + 0xFC8, 12, 0 },
};

/* Sprite: ContinueText (192x32 ia8) */
Sprite dMN1PContinue_ContinueText = {
	0, 0,
	192, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	20, 21,
	3, 1,
	(Bitmap*)dMN1PContinue_ContinueText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
