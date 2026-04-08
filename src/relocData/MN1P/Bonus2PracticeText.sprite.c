/* Sprite: Bonus2PracticeText */

Gfx dMN1P_Bonus2PracticeText_dl[] = { gsSPEndDisplayList() };

/* Texture: Bonus2PracticeText (128x16 i4) */
u8 dMN1P_Bonus2PracticeText_tex[] = {
    #include <MN1P/Bonus2PracticeText.i4.inc.c>
};

Bitmap dMN1P_Bonus2PracticeText_bitmaps[] = {
	{ 128, 128, 0, 0, dMN1P_Bonus2PracticeText_tex, 16, 0 },
};

/* Sprite: Bonus2PracticeText (128x16 i4) */
Sprite dMN1P_Bonus2PracticeText = {
	0, 0,
	128, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dMN1P_Bonus2PracticeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
