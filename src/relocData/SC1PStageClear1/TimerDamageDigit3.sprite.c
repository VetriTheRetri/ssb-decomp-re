/* Sprite: TimerDamageDigit3 */

Gfx dSC1PStageClear1_TimerDamageDigit3_dl[] = { gsSPEndDisplayList() };

/* Texture: TimerDamageDigit3 (13(16)x16 ia8) */
u8 dSC1PStageClear1_TimerDamageDigit3_tex[] = {
    #include <SC1PStageClear1/TimerDamageDigit3.ia8.inc.c>
};

Bitmap dSC1PStageClear1_TimerDamageDigit3_bitmaps[] = {
	{ 13, 16, 0, 0, dSC1PStageClear1_TimerDamageDigit3_tex, 16, 0 },
};

/* Sprite: TimerDamageDigit3 (13x16 ia8) */
Sprite dSC1PStageClear1_TimerDamageDigit3 = {
	0, 0,
	13, 16,
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
	3, 1,
	(Bitmap*)dSC1PStageClear1_TimerDamageDigit3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
