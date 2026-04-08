/* Sprite: NoText */

Gfx dMN1PContinue_NoText_dl[] = { gsSPEndDisplayList() };

/* Texture: NoText (43(48)x25 ia8) */
u8 dMN1PContinue_NoText_tex[] = {
    #include <MN1PContinue/NoText.ia8.inc.c>
};

Bitmap dMN1PContinue_NoText_bitmaps[] = {
	{ 43, 48, 0, 0, dMN1PContinue_NoText_tex, 25, 0 },
};

/* Sprite: NoText (43x25 ia8) */
Sprite dMN1PContinue_NoText = {
	0, 0,
	43, 25,
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
	(Bitmap*)dMN1PContinue_NoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
