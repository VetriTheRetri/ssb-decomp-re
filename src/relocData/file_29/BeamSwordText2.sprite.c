/* Sprite: BeamSwordText2 */

Gfx dRelocFile29_BeamSwordText2_dl[] = { gsSPEndDisplayList() };

/* Texture: BeamSwordText2 (75(80)x15 ia8) */
u8 dRelocFile29_BeamSwordText2_tex[] = {
    #include <file_29/BeamSwordText2.ia8.inc.c>
};

Bitmap dRelocFile29_BeamSwordText2_bitmaps[] = {
	{ 75, 80, 0, 0, dRelocFile29_BeamSwordText2_tex, 15, 0 },
};

/* Sprite: BeamSwordText2 (75x15 ia8) */
Sprite dRelocFile29_BeamSwordText2 = {
	0, 0,
	75, 15,
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
	(Bitmap*)dRelocFile29_BeamSwordText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
