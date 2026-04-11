/* Sprite: MasterHandText */

Gfx dSC1PIntro_MasterHandText_dl[] = { gsSPEndDisplayList() };

/* Texture: MasterHandText (79(80)x12 i4) */
u8 dSC1PIntro_MasterHandText_tex[] = {
    #include <SC1PIntro/MasterHandText.i4.inc.c>
};

Bitmap dSC1PIntro_MasterHandText_bitmaps[] = {
	{ 79, 80, 0, 0, dSC1PIntro_MasterHandText_tex, 12, 0 },
};

/* Sprite: MasterHandText (79x12 i4) */
Sprite dSC1PIntro_MasterHandText = {
	0, 0,
	79, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dSC1PIntro_MasterHandText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
