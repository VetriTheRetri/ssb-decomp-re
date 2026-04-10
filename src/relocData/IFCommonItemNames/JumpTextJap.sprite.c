/* Sprite: JumpTextJap */

Gfx dIFCommonItemNames_JumpTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: JumpTextJap (45(48)x12 i4) */
u8 dIFCommonItemNames_JumpTextJap_tex[] = {
    #include <IFCommonItemNames/JumpTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_JumpTextJap_bitmaps[] = {
	{ 45, 48, 0, 0, dIFCommonItemNames_JumpTextJap_tex, 12, 0 },
};

/* Sprite: JumpTextJap (45x12 i4) */
Sprite dIFCommonItemNames_JumpTextJap = {
	0, 0,
	45, 12,
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
	(Bitmap*)dIFCommonItemNames_JumpTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
