/* Sprite: SideArrows */

Gfx dMNVSRecordMain_SideArrows_dl[] = { gsSPEndDisplayList() };

/* Texture: SideArrows (23(32)x14 i4) */
u8 dMNVSRecordMain_SideArrows_tex[] = {
    #include <MNVSRecordMain/SideArrows.i4.inc.c>
};

Bitmap dMNVSRecordMain_SideArrows_bitmaps[] = {
	{ 23, 32, 0, 0, dMNVSRecordMain_SideArrows_tex, 14, 0 },
};

/* Sprite: SideArrows (23x14 i4) */
Sprite dMNVSRecordMain_SideArrows = {
	0, 0,
	23, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNVSRecordMain_SideArrows_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
