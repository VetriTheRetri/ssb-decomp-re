/* Sprite: MatchOptionsTextJap */

Gfx dMNVSMode_MatchOptionsTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MatchOptionsTextJap (99(104)x15 ia8) */
u8 dMNVSMode_MatchOptionsTextJap_tex[] = {
    #include <MNVSMode/MatchOptionsTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_MatchOptionsTextJap_bitmaps[] = {
	{ 99, 104, 0, 0, dMNVSMode_MatchOptionsTextJap_tex, 15, 0 },
};

/* Sprite: MatchOptionsTextJap (99x15 ia8) */
Sprite dMNVSMode_MatchOptionsTextJap = {
	0, 0,
	99, 15,
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
	(Bitmap*)dMNVSMode_MatchOptionsTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
