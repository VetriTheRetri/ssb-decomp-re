/* Sprite: EnemyStatusTextJap */

Gfx dRelocFile29_EnemyStatusTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: EnemyStatusTextJap (56(64)x12 i4) */
u8 dRelocFile29_EnemyStatusTextJap_tex[] = {
    #include <file_29/EnemyStatusTextJap.i4.inc.c>
};

Bitmap dRelocFile29_EnemyStatusTextJap_bitmaps[] = {
	{ 56, 64, 0, 0, dRelocFile29_EnemyStatusTextJap_tex, 12, 0 },
};

/* Sprite: EnemyStatusTextJap (56x12 i4) */
Sprite dRelocFile29_EnemyStatusTextJap = {
	0, 0,
	56, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dRelocFile29_EnemyStatusTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
