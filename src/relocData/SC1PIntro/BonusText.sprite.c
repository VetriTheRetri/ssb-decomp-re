/* Sprite: BonusText */

Gfx dSC1PIntro_BonusText_dl[] = { gsSPEndDisplayList() };

/* Texture: BonusText (62(64)x19 i4) */
u8 dSC1PIntro_BonusText_tex[] = {
    #include <SC1PIntro/BonusText.i4.inc.c>
};

Bitmap dSC1PIntro_BonusText_bitmaps[] = {
	{ 62, 64, 0, 0, dSC1PIntro_BonusText_tex, 19, 0 },
};

/* Sprite: BonusText (62x19 i4) */
Sprite dSC1PIntro_BonusText = {
	0, 0,
	62, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dSC1PIntro_BonusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
