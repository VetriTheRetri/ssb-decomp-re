/* Sprite: FoxMcCloudText */

Gfx dSC1PIntro_FoxMcCloudText_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxMcCloudText (77(80)x12 i4) */
u8 dSC1PIntro_FoxMcCloudText_tex[] = {
    #include <SC1PIntro/FoxMcCloudText.i4.inc.c>
};

Bitmap dSC1PIntro_FoxMcCloudText_bitmaps[] = {
	{ 77, 80, 0, 0, dSC1PIntro_FoxMcCloudText_tex, 12, 0 },
};

/* Sprite: FoxMcCloudText (77x12 i4) */
Sprite dSC1PIntro_FoxMcCloudText = {
	0, 0,
	77, 12,
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
	(Bitmap*)dSC1PIntro_FoxMcCloudText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
