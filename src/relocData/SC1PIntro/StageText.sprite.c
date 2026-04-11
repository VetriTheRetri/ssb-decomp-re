/* Sprite: StageText */

Gfx dSC1PIntro_StageText_dl[] = { gsSPEndDisplayList() };

/* Texture: StageText (57(64)x20 i4) */
u8 dSC1PIntro_StageText_tex[] = {
    #include <SC1PIntro/StageText.i4.inc.c>
};

Bitmap dSC1PIntro_StageText_bitmaps[] = {
	{ 57, 64, 0, 0, dSC1PIntro_StageText_tex, 20, 0 },
};

/* Sprite: StageText (57x20 i4) */
Sprite dSC1PIntro_StageText = {
	0, 0,
	57, 20,
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
	(Bitmap*)dSC1PIntro_StageText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
