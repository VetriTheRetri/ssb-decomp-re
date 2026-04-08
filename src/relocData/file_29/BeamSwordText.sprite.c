/* Sprite: BeamSwordText */

Gfx dRelocFile29_BeamSwordText_dl[] = { gsSPEndDisplayList() };

/* Texture: BeamSwordText (78(80)x16 ia8) */
u8 dRelocFile29_BeamSwordText_tex[] = {
    #include <file_29/BeamSwordText.ia8.inc.c>
};

Bitmap dRelocFile29_BeamSwordText_bitmaps[] = {
	{ 78, 80, 0, 0, dRelocFile29_BeamSwordText_tex, 16, 0 },
};

/* Sprite: BeamSwordText (78x16 ia8) */
Sprite dRelocFile29_BeamSwordText = {
	0, 0,
	78, 16,
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
	(Bitmap*)dRelocFile29_BeamSwordText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
