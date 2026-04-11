/* Sprite: MetalMarioText */

Gfx dSC1PIntro_MetalMarioText_dl[] = { gsSPEndDisplayList() };

/* Texture: MetalMarioText (72(80)x12 i4) */
u8 dSC1PIntro_MetalMarioText_tex[] = {
    #include <SC1PIntro/MetalMarioText.i4.inc.c>
};

Bitmap dSC1PIntro_MetalMarioText_bitmaps[] = {
	{ 72, 80, 0, 0, dSC1PIntro_MetalMarioText_tex, 12, 0 },
};

/* Sprite: MetalMarioText (72x12 i4) */
Sprite dSC1PIntro_MetalMarioText = {
	0, 0,
	72, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dSC1PIntro_MetalMarioText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
