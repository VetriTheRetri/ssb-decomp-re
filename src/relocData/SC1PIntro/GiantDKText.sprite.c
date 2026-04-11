/* Sprite: GiantDKText */

Gfx dSC1PIntro_GiantDKText_dl[] = { gsSPEndDisplayList() };

/* Texture: GiantDKText (55(64)x12 i4) */
u8 dSC1PIntro_GiantDKText_tex[] = {
    #include <SC1PIntro/GiantDKText.i4.inc.c>
};

Bitmap dSC1PIntro_GiantDKText_bitmaps[] = {
	{ 55, 64, 0, 0, dSC1PIntro_GiantDKText_tex, 12, 0 },
};

/* Sprite: GiantDKText (55x12 i4) */
Sprite dSC1PIntro_GiantDKText = {
	0, 0,
	55, 12,
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
	(Bitmap*)dSC1PIntro_GiantDKText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
