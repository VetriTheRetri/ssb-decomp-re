/* Sprite: Shadow */

Gfx dMN1PContinue_Shadow_dl[] = { gsSPEndDisplayList() };

/* Texture: Shadow (160x37 i4) */
u8 dMN1PContinue_Shadow_tex[] = {
    #include <MN1PContinue/Shadow.i4.inc.c>
};

Bitmap dMN1PContinue_Shadow_bitmaps[] = {
	{ 160, 160, 0, 0, dMN1PContinue_Shadow_tex, 37, 0 },
};

/* Sprite: Shadow (160x37 i4) */
Sprite dMN1PContinue_Shadow = {
	0, 0,
	160, 37,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	37, 37,
	4, 0,
	(Bitmap*)dMN1PContinue_Shadow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
