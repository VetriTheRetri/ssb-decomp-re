/* Sprite: Cross */

Gfx dSC1PIntro_Cross_dl[] = { gsSPEndDisplayList() };

/* Texture: Cross (17(32)x20 i4) */
u8 dSC1PIntro_Cross_tex[] = {
    #include <SC1PIntro/Cross.i4.inc.c>
};

Bitmap dSC1PIntro_Cross_bitmaps[] = {
	{ 17, 32, 0, 0, dSC1PIntro_Cross_tex, 20, 0 },
};

/* Sprite: Cross (17x20 i4) */
Sprite dSC1PIntro_Cross = {
	0, 0,
	17, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Cross_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
