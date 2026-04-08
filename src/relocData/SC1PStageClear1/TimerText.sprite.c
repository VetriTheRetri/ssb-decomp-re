/* Sprite: TimerText */

Gfx dSC1PStageClear1_TimerText_dl[] = { gsSPEndDisplayList() };

/* Texture: TimerText (56x20 ia8) */
u8 dSC1PStageClear1_TimerText_tex[] = {
    #include <SC1PStageClear1/TimerText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_TimerText_bitmaps[] = {
	{ 56, 56, 0, 0, dSC1PStageClear1_TimerText_tex, 20, 0 },
};

/* Sprite: TimerText (56x20 ia8) */
Sprite dSC1PStageClear1_TimerText = {
	0, 0,
	56, 20,
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
	3, 1,
	(Bitmap*)dSC1PStageClear1_TimerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
