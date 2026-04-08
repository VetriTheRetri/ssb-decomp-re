/* Sprite: TrainingModeText */

Gfx dMN1P_TrainingModeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TrainingModeText (148(160)x23 i4) */
u8 dMN1P_TrainingModeText_tex[] = {
    #include <MN1P/TrainingModeText.i4.inc.c>
};

Bitmap dMN1P_TrainingModeText_bitmaps[] = {
	{ 148, 160, 0, 0, dMN1P_TrainingModeText_tex, 23, 0 },
};

/* Sprite: TrainingModeText (148x23 i4) */
Sprite dMN1P_TrainingModeText = {
	0, 0,
	148, 23,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	23, 23,
	4, 0,
	(Bitmap*)dMN1P_TrainingModeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
