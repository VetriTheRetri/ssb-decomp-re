/* Sprite: FTEmblem */

Gfx dLinkModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (29(32)x24 i4) */
u8 dLinkModel_FTEmblem_tex[] = {
    #include <LinkModel/FTEmblem.i4.inc.c>
};

Bitmap dLinkModel_FTEmblem_bitmaps[] = {
	{ 29, 32, 0, 0, dLinkModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (29x24 i4) */
Sprite dLinkModel_FTEmblem = {
	0, 0,
	29, 24,
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
	(Bitmap*)dLinkModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
