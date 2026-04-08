/* Sprite: Bonus2PracticeTextJap */

Gfx dMN1P_Bonus2PracticeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: Bonus2PracticeTextJap (128x15 ia8) */
u8 dMN1P_Bonus2PracticeTextJap_tex[] = {
    #include <MN1P/Bonus2PracticeTextJap.ia8.inc.c>
};

Bitmap dMN1P_Bonus2PracticeTextJap_bitmaps[] = {
	{ 128, 128, 0, 0, dMN1P_Bonus2PracticeTextJap_tex, 15, 0 },
};

/* Sprite: Bonus2PracticeTextJap (128x15 ia8) */
Sprite dMN1P_Bonus2PracticeTextJap = {
	0, 0,
	128, 15,
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
	(Bitmap*)dMN1P_Bonus2PracticeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
