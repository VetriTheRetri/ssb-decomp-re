/* Sprite: FTEmblem */

Gfx dDkIcon_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (30(32)x22 i4) */
u8 dDkIcon_FTEmblem_tex[] = {
    #include <DkIcon/FTEmblem.i4.inc.c>
};

Bitmap dDkIcon_FTEmblem_bitmaps[] = {
	{ 30, 32, 0, 0, dDkIcon_FTEmblem_tex, 22, 0 },
};

/* Sprite: FTEmblem (30x22 i4) */
Sprite dDkIcon_FTEmblem = {
	0, 0,
	30, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	(Bitmap*)dDkIcon_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
