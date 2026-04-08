/* Sprite: VsRecordTextJap */

Gfx dMNIndex_VsRecordTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: VsRecordTextJap (59(64)x15 ia8) */
u8 dMNIndex_VsRecordTextJap_tex[] = {
    #include <MNIndex/VsRecordTextJap.ia8.inc.c>
};

Bitmap dMNIndex_VsRecordTextJap_bitmaps[] = {
	{ 59, 64, 0, 0, dMNIndex_VsRecordTextJap_tex, 15, 0 },
};

/* Sprite: VsRecordTextJap (59x15 ia8) */
Sprite dMNIndex_VsRecordTextJap = {
	0, 0,
	59, 15,
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
	(Bitmap*)dMNIndex_VsRecordTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
