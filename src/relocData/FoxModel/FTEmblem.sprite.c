/* Sprite: FTEmblem */

Gfx dFoxModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (30(32)x24 i4) */
u8 dFoxModel_FTEmblem_tex[] = {
    #include <FoxModel/FTEmblem.i4.inc.c>
};

Bitmap dFoxModel_FTEmblem_bitmaps[] = {
	{ 30, 32, 0, 0, dFoxModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (30x24 i4) */
Sprite dFoxModel_FTEmblem = {
	0, 0,
	30, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	4, 0,
	(Bitmap*)dFoxModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
