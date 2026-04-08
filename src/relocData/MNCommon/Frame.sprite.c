/* Sprite: Frame */

Gfx dMNCommon_Frame_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame (136x27 ia8) */
u8 dMNCommon_Frame_tex[] = {
    #include <MNCommon/Frame.ia8.inc.c>
};

Bitmap dMNCommon_Frame_bitmaps[] = {
	{ 136, 136, 0, 0, dMNCommon_Frame_tex, 27, 0 },
};

/* Sprite: Frame (136x27 ia8) */
Sprite dMNCommon_Frame = {
	0, 0,
	136, 27,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	27, 27,
	3, 1,
	(Bitmap*)dMNCommon_Frame_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
