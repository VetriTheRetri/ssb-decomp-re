/* Sprite: RaceToTheFinishText */

Gfx dSC1PIntro_RaceToTheFinishText_dl[] = { gsSPEndDisplayList() };

/* Texture: RaceToTheFinishText (173(176)x20 i4) */
u8 dSC1PIntro_RaceToTheFinishText_tex[] = {
    #include <SC1PIntro/RaceToTheFinishText.i4.inc.c>
};

Bitmap dSC1PIntro_RaceToTheFinishText_bitmaps[] = {
	{ 173, 176, 0, 0, dSC1PIntro_RaceToTheFinishText_tex, 20, 0 },
};

/* Sprite: RaceToTheFinishText (173x20 i4) */
Sprite dSC1PIntro_RaceToTheFinishText = {
	0, 0,
	173, 20,
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
	(Bitmap*)dSC1PIntro_RaceToTheFinishText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
