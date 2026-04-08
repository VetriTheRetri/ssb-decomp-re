/* Sprite: DataTextJap */

Gfx dMNMain_DataTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: DataTextJap (70(72)x15 ia8) */
u8 dMNMain_DataTextJap_tex[] = {
    #include <MNMain/DataTextJap.ia8.inc.c>
};

Bitmap dMNMain_DataTextJap_bitmaps[] = {
	{ 70, 72, 0, 0, dMNMain_DataTextJap_tex, 15, 0 },
};

/* Sprite: DataTextJap (70x15 ia8) */
Sprite dMNMain_DataTextJap = {
	0, 0,
	70, 15,
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
	(Bitmap*)dMNMain_DataTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
