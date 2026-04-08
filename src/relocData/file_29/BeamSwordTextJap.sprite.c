/* Sprite: BeamSwordTextJap */

Gfx dRelocFile29_BeamSwordTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: BeamSwordTextJap (62(64)x12 i4) */
u8 dRelocFile29_BeamSwordTextJap_tex[] = {
    #include <file_29/BeamSwordTextJap.i4.inc.c>
};

Bitmap dRelocFile29_BeamSwordTextJap_bitmaps[] = {
	{ 62, 64, 0, 0, dRelocFile29_BeamSwordTextJap_tex, 12, 0 },
};

/* Sprite: BeamSwordTextJap (62x12 i4) */
Sprite dRelocFile29_BeamSwordTextJap = {
	0, 0,
	62, 12,
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
	(Bitmap*)dRelocFile29_BeamSwordTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
