/* Sprite: TrainingModeTextJap */

Gfx dMN1P_TrainingModeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TrainingModeTextJap (80x15 ia8) */
u8 dMN1P_TrainingModeTextJap_tex[] = {
    #include <MN1P/TrainingModeTextJap.ia8.inc.c>
};

Bitmap dMN1P_TrainingModeTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMN1P_TrainingModeTextJap_tex, 15, 0 },
};

/* Sprite: TrainingModeTextJap (80x15 ia8) */
Sprite dMN1P_TrainingModeTextJap = {
	0, 0,
	80, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMN1P_TrainingModeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
