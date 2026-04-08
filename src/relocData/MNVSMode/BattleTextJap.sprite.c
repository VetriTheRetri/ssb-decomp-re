/* Sprite: BattleTextJap */

Gfx dMNVSMode_BattleTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: BattleTextJap (36(40)x15 ia8) */
u8 dMNVSMode_BattleTextJap_tex[] = {
    #include <MNVSMode/BattleTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_BattleTextJap_bitmaps[] = {
	{ 36, 40, 0, 0, dMNVSMode_BattleTextJap_tex, 15, 0 },
};

/* Sprite: BattleTextJap (36x15 ia8) */
Sprite dMNVSMode_BattleTextJap = {
	0, 0,
	36, 15,
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
	(Bitmap*)dMNVSMode_BattleTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
