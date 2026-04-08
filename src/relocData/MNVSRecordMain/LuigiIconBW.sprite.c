/* Sprite: LuigiIconBW */

Gfx dMNVSRecordMain_LuigiIconBW_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiIconBW (16x18 ia8) */
u8 dMNVSRecordMain_LuigiIconBW_tex[] = {
    #include <MNVSRecordMain/LuigiIconBW.ia8.inc.c>
};

Bitmap dMNVSRecordMain_LuigiIconBW_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_LuigiIconBW_tex, 18, 0 },
};

/* Sprite: LuigiIconBW (16x18 ia8) */
Sprite dMNVSRecordMain_LuigiIconBW = {
	0, 0,
	16, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNVSRecordMain_LuigiIconBW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
