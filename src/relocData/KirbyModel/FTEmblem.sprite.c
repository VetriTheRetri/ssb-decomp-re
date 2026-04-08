/* Sprite: FTEmblem */

Gfx dKirbyModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (27(32)x25 i4) */
u8 dKirbyModel_FTEmblem_tex[] = {
    #include <KirbyModel/FTEmblem.i4.inc.c>
};

Bitmap dKirbyModel_FTEmblem_bitmaps[] = {
	{ 27, 32, 0, 0, dKirbyModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (27x25 i4) */
Sprite dKirbyModel_FTEmblem = {
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
	(Bitmap*)dKirbyModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
