/* Sprite: FTEmblem */

Gfx dCaptainModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (30(32)x20 i4) */
u8 dCaptainModel_FTEmblem_tex[] = {
    #include <CaptainModel/FTEmblem.i4.inc.c>
};

Bitmap dCaptainModel_FTEmblem_bitmaps[] = {
	{ 30, 32, 0, 0, dCaptainModel_FTEmblem_tex, 20, 0 },
};

/* Sprite: FTEmblem (30x20 i4) */
Sprite dCaptainModel_FTEmblem = {
	0, 0,
	30, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dCaptainModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
