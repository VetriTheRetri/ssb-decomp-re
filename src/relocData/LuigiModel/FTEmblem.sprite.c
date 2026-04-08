/* Sprite: FTEmblem */

Gfx dLuigiModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (27(32)x25 i4) */
u8 dLuigiModel_FTEmblem_tex[] = {
    #include <LuigiModel/FTEmblem.i4.inc.c>
};

Bitmap dLuigiModel_FTEmblem_bitmaps[] = {
	{ 27, 32, 0, 0, dLuigiModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (27x25 i4) */
Sprite dLuigiModel_FTEmblem = {
	0, 0,
	27, 25,
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
	(Bitmap*)dLuigiModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
