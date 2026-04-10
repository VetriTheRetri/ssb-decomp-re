/* Sprite: CameraTextJap */

Gfx dIFCommonItemNames_CameraTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: CameraTextJap (34(48)x12 i4) */
u8 dIFCommonItemNames_CameraTextJap_tex[] = {
    #include <IFCommonItemNames/CameraTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_CameraTextJap_bitmaps[] = {
	{ 34, 48, 0, 0, dIFCommonItemNames_CameraTextJap_tex, 12, 0 },
};

/* Sprite: CameraTextJap (34x12 i4) */
Sprite dIFCommonItemNames_CameraTextJap = {
	0, 0,
	34, 12,
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
	(Bitmap*)dIFCommonItemNames_CameraTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
