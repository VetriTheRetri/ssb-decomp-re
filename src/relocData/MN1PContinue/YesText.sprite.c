/* Sprite: YesText */

Gfx dMN1PContinue_YesText_dl[] = { gsSPEndDisplayList() };

/* Texture: YesText (48x25 ia8) */
u8 dMN1PContinue_YesText_tex[] = {
    #include <MN1PContinue/YesText.ia8.inc.c>
};

Bitmap dMN1PContinue_YesText_bitmaps[] = {
	{ 48, 48, 0, 0, dMN1PContinue_YesText_tex, 25, 0 },
};

/* Sprite: YesText (48x25 ia8) */
Sprite dMN1PContinue_YesText = {
	0, 0,
	48, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	3, 1,
	(Bitmap*)dMN1PContinue_YesText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
