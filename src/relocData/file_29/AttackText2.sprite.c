/* Sprite: AttackText2 */

Gfx dRelocFile29_AttackText2_dl[] = { gsSPEndDisplayList() };

/* Texture: AttackText2 (42(48)x16 ia8) */
u8 dRelocFile29_AttackText2_tex[] = {
    #include <file_29/AttackText2.ia8.inc.c>
};

Bitmap dRelocFile29_AttackText2_bitmaps[] = {
	{ 42, 48, 0, 0, dRelocFile29_AttackText2_tex, 16, 0 },
};

/* Sprite: AttackText2 (42x16 ia8) */
Sprite dRelocFile29_AttackText2 = {
	0, 0,
	42, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_AttackText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
