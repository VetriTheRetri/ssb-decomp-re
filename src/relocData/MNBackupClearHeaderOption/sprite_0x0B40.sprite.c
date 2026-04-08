/* Sprite: sprite_0x0B40 */

Gfx dMNBackupClearHeaderOption_sprite_0x0B40_dl[] = { gsSPEndDisplayList() };

/* Texture: sprite_0x0B40 (272x21 i4) */
u8 dMNBackupClearHeaderOption_sprite_0x0B40_tex[] = {
    #include <MNBackupClearHeaderOption/sprite_0x0B40.i4.inc.c>
};

Bitmap dMNBackupClearHeaderOption_sprite_0x0B40_bitmaps[] = {
	{ 272, 272, 0, 0, dMNBackupClearHeaderOption_sprite_0x0B40_tex, 21, 0 },
};

/* Sprite: sprite_0x0B40 (272x21 i4) */
Sprite dMNBackupClearHeaderOption_sprite_0x0B40 = {
	0, 0,
	272, 21,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	21, 21,
	4, 0,
	(Bitmap*)dMNBackupClearHeaderOption_sprite_0x0B40_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
