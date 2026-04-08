/* Sprite: 1PGameTextJap */

Gfx dMN1P_1PGameTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PGameTextJap (79(80)x15 ia8) */
u8 dMN1P_1PGameTextJap_tex[] = {
    #include <MN1P/1PGameTextJap.ia8.inc.c>
};

Bitmap dMN1P_1PGameTextJap_bitmaps[] = {
	{ 79, 80, 0, 0, dMN1P_1PGameTextJap_tex, 15, 0 },
};

/* Sprite: 1PGameTextJap (79x15 ia8) */
Sprite dMN1P_1PGameTextJap = {
	0, 0,
	79, 15,
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
	(Bitmap*)dMN1P_1PGameTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
