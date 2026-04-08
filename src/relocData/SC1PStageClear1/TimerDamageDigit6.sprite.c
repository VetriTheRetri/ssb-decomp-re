/* Sprite: TimerDamageDigit6 */

Gfx dSC1PStageClear1_TimerDamageDigit6_dl[] = { gsSPEndDisplayList() };

/* Texture: TimerDamageDigit6 (12(16)x16 ia8) */
u8 dSC1PStageClear1_TimerDamageDigit6_tex[] = {
    #include <SC1PStageClear1/TimerDamageDigit6.ia8.inc.c>
};

Bitmap dSC1PStageClear1_TimerDamageDigit6_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PStageClear1_TimerDamageDigit6_tex, 16, 0 },
};

/* Sprite: TimerDamageDigit6 (12x16 ia8) */
Sprite dSC1PStageClear1_TimerDamageDigit6 = {
	0, 0,
	12, 16,
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
	(Bitmap*)dSC1PStageClear1_TimerDamageDigit6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
