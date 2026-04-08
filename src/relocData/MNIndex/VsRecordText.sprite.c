/* Sprite: VsRecordText */

Gfx dMNIndex_VsRecordText_dl[] = { gsSPEndDisplayList() };

/* Texture: VsRecordText (107(112)x17 i4) */
u8 dMNIndex_VsRecordText_tex[] = {
    #include <MNIndex/VsRecordText.i4.inc.c>
};

Bitmap dMNIndex_VsRecordText_bitmaps[] = {
	{ 107, 112, 0, 0, dMNIndex_VsRecordText_tex, 17, 0 },
};

/* Sprite: VsRecordText (107x17 i4) */
Sprite dMNIndex_VsRecordText = {
	0, 0,
	107, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNIndex_VsRecordText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
