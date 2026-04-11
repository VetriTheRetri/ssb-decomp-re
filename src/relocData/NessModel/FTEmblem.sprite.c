/* Sprite: FTEmblem */

Gfx dNessModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (25(32)x25 i4) */
u8 dNessModel_FTEmblem_tex[] = {
    #include <NessModel/FTEmblem.i4.inc.c>
};

Bitmap dNessModel_FTEmblem_bitmaps[] = {
	{ 25, 32, 0, 0, dNessModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (25x25 i4) */
Sprite dNessModel_FTEmblem = {
	0, 0,
	25, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	(Bitmap*)dNessModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
