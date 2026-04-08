/* Sprite: Bonus1PracticeTextJap */

Gfx dMN1P_Bonus1PracticeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: Bonus1PracticeTextJap (125(128)x15 ia8) */
u8 dMN1P_Bonus1PracticeTextJap_tex[] = {
    #include <MN1P/Bonus1PracticeTextJap.ia8.inc.c>
};

Bitmap dMN1P_Bonus1PracticeTextJap_bitmaps[] = {
	{ 125, 128, 0, 0, dMN1P_Bonus1PracticeTextJap_tex, 15, 0 },
};

/* Sprite: Bonus1PracticeTextJap (125x15 ia8) */
Sprite dMN1P_Bonus1PracticeTextJap = {
	0, 0,
	125, 15,
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
	(Bitmap*)dMN1P_Bonus1PracticeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
