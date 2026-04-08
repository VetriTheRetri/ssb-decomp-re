/* Sprite: TeamAttackTextJap */

Gfx dMNVSOptions_TeamAttackTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TeamAttackTextJap (104x15 ia8) */
u8 dMNVSOptions_TeamAttackTextJap_tex[] = {
    #include <MNVSOptions/TeamAttackTextJap.ia8.inc.c>
};

Bitmap dMNVSOptions_TeamAttackTextJap_bitmaps[] = {
	{ 104, 104, 0, 0, dMNVSOptions_TeamAttackTextJap_tex, 15, 0 },
};

/* Sprite: TeamAttackTextJap (104x15 ia8) */
Sprite dMNVSOptions_TeamAttackTextJap = {
	0, 0,
	104, 15,
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
	(Bitmap*)dMNVSOptions_TeamAttackTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
