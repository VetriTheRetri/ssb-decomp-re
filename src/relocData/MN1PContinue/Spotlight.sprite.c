/* Sprite: Spotlight */

Gfx dMN1PContinue_Spotlight_dl[] = { gsSPEndDisplayList() };

/* Texture: Spotlight (160x168 i4, 4 tiles) */
u8 dMN1PContinue_Spotlight_tex[] = {
    #include <MN1PContinue/Spotlight.i4.inc.c>
};

Bitmap dMN1PContinue_Spotlight_bitmaps[] = {
	{ 160, 160, 0, 0, dMN1PContinue_Spotlight_tex, 51, 0 },
	{ 160, 160, 0, 0, dMN1PContinue_Spotlight_tex + 0xFF8, 51, 0 },
	{ 160, 160, 0, 0, dMN1PContinue_Spotlight_tex + 0x1FF0, 51, 0 },
	{ 160, 160, 0, 0, dMN1PContinue_Spotlight_tex + 0x2FE8, 15, 0 },
};

/* Sprite: Spotlight (160x165 i4) */
Sprite dMN1PContinue_Spotlight = {
	0, 0,
	160, 165,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	50, 51,
	4, 0,
	(Bitmap*)dMN1PContinue_Spotlight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
