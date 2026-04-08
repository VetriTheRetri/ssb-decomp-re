/* Sprite: TeamTextJap */

Gfx dMNVSMode_TeamTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TeamTextJap (34(40)x15 ia8) */
u8 dMNVSMode_TeamTextJap_tex[] = {
    #include <MNVSMode/TeamTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_TeamTextJap_bitmaps[] = {
	{ 34, 40, 0, 0, dMNVSMode_TeamTextJap_tex, 15, 0 },
};

/* Sprite: TeamTextJap (34x15 ia8) */
Sprite dMNVSMode_TeamTextJap = {
	0, 0,
	34, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSMode_TeamTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
