/* Sprite: FTEmblem */

Gfx dSamusModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (27(32)x27 i4) */
u8 dSamusModel_FTEmblem_tex[] = {
    #include <SamusModel/FTEmblem.i4.inc.c>
};

Bitmap dSamusModel_FTEmblem_bitmaps[] = {
	{ 27, 32, 0, 0, dSamusModel_FTEmblem_tex, 27, 0 },
};

/* Sprite: FTEmblem (27x27 i4) */
Sprite dSamusModel_FTEmblem = {
	0, 0,
	27, 27,
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
	4, 0,
	(Bitmap*)dSamusModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
