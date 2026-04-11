/* Sprite: 0x5028 */

Gfx dSC1PIntro_0x5028_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x5028 (152(160)x16 i4) */
u8 dSC1PIntro_0x5028_tex[] = {
    #include <SC1PIntro/0x5028.i4.inc.c>
};

Bitmap dSC1PIntro_0x5028_bitmaps[] = {
	{ 152, 160, 0, 0, dSC1PIntro_0x5028_tex, 16, 0 },
};

/* Sprite: 0x5028 (152x16 i4) */
Sprite dSC1PIntro_0x5028 = {
	0, 0,
	152, 16,
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
	(Bitmap*)dSC1PIntro_0x5028_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
