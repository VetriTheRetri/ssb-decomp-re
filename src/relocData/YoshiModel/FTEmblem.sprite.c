/* Sprite: FTEmblem */

Gfx dYoshiModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (22(32)x25 i4) */
u8 dYoshiModel_FTEmblem_tex[] = {
    #include <YoshiModel/FTEmblem.i4.inc.c>
};

Bitmap dYoshiModel_FTEmblem_bitmaps[] = {
	{ 22, 32, 0, 0, dYoshiModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (22x25 i4) */
Sprite dYoshiModel_FTEmblem = {
	0, 0,
	22, 25,
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
	(Bitmap*)dYoshiModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
