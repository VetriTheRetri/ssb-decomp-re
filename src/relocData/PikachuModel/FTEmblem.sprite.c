/* Sprite: FTEmblem */

Gfx dPikachuModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (24(32)x24 i4) */
u8 dPikachuModel_FTEmblem_tex[] = {
    #include <PikachuModel/FTEmblem.i4.inc.c>
};

Bitmap dPikachuModel_FTEmblem_bitmaps[] = {
	{ 24, 32, 0, 0, dPikachuModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (24x24 i4) */
Sprite dPikachuModel_FTEmblem = {
	0, 0,
	24, 24,
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
	(Bitmap*)dPikachuModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
