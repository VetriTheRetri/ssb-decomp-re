/* Sprite: Cover */

Gfx dMVOpeningPortraitsSet1_Cover_dl[] = { gsSPEndDisplayList() };

/* Texture: Cover (656x59 i4, 5 tiles) */
u8 dMVOpeningPortraitsSet1_Cover_tex[] = {
    #include <MVOpeningPortraitsSet1/Cover.i4.inc.c>
};

Bitmap dMVOpeningPortraitsSet1_Cover_bitmaps[] = {
	{ 656, 656, 0, 0, dMVOpeningPortraitsSet1_Cover_tex, 12, 0 },
	{ 656, 656, 0, 0, dMVOpeningPortraitsSet1_Cover_tex + 0xF68, 12, 0 },
	{ 656, 656, 0, 0, dMVOpeningPortraitsSet1_Cover_tex + 0x1ED0, 12, 0 },
	{ 656, 656, 0, 0, dMVOpeningPortraitsSet1_Cover_tex + 0x2E38, 12, 0 },
	{ 656, 656, 0, 0, dMVOpeningPortraitsSet1_Cover_tex + 0x3DA0, 11, 0 },
};

/* Sprite: Cover (656x55 i4) */
Sprite dMVOpeningPortraitsSet1_Cover = {
	0, 0,
	656, 55,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	5, 84,
	11, 12,
	4, 0,
	(Bitmap*)dMVOpeningPortraitsSet1_Cover_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
