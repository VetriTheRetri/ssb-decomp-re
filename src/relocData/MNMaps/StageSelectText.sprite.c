/* Sprite: StageSelectText */

Gfx dMNMaps_StageSelectText_dl[] = { gsSPEndDisplayList() };

/* Texture: StageSelectText (112x19 ia8, 2 tiles) */
u8 dMNMaps_StageSelectText_tex[] = {
    #include <MNMaps/StageSelectText.ia8.inc.c>
};

Bitmap dMNMaps_StageSelectText_bitmaps[] = {
	{ 112, 112, 0, 0, dMNMaps_StageSelectText_tex, 13, 0 },
	{ 112, 112, 0, 0, dMNMaps_StageSelectText_tex + 0x5B8, 6, 0 },
};

/* Sprite: StageSelectText (112x19 ia8) */
Sprite dMNMaps_StageSelectText = {
	0, 0,
	112, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	13, 13,
	3, 1,
	(Bitmap*)dMNMaps_StageSelectText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
