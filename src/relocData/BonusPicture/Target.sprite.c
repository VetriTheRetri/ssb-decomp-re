/* Sprite: Target */

Gfx dBonusPicture_Target_dl[] = { gsSPEndDisplayList() };

/* Texture: Target (113(116)x128 rgba32, 16 tiles) */
u8 dBonusPicture_Target_tex[] = {
    #include <BonusPicture/Target.rgba32.inc.c>
};

Bitmap dBonusPicture_Target_bitmaps[] = {
	{ 113, 116, 0, 0, dBonusPicture_Target_tex, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0xE88, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x1D10, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x2B98, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x3A20, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x48A8, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x5730, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x65B8, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x7440, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x82C8, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x9150, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0x9FD8, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0xAE60, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0xBCE8, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0xCB70, 8, 0 },
	{ 113, 116, 0, 0, dBonusPicture_Target_tex + 0xD9F8, 8, 0 },
};

/* Sprite: Target (113x113 rgba32) */
Sprite dBonusPicture_Target = {
	0, 0,
	113, 113,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	16, 216,
	7, 8,
	0, 3,
	(Bitmap*)dBonusPicture_Target_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
