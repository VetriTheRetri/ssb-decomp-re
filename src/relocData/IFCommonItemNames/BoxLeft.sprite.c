/* Sprite: BoxLeft */

/* Texture: BoxLeft (4(16)x152 ci4) */
u8 dIFCommonItemNames_BoxLeft_tex[] = {
    #include <IFCommonItemNames/BoxLeft.ci4.inc.c>
};

Bitmap dIFCommonItemNames_BoxLeft_bitmaps[] = {
	{ 4, 16, 0, 0, dIFCommonItemNames_BoxLeft_tex, 152, 0 },
};

/* Sprite: BoxLeft (4x152 ci4) */
Sprite dIFCommonItemNames_BoxLeft = {
	0, 0,
	4, 152,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x4025400C,
	0, 1,
	1, 36,
	152, 152,
	2, 0,
	(Bitmap*)dIFCommonItemNames_BoxLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
