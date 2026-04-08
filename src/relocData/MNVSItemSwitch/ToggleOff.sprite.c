/* Sprite: ToggleOff */

Gfx dMNVSItemSwitch_ToggleOff_dl[] = { gsSPEndDisplayList() };

/* Texture: ToggleOff (23(32)x8 i4) */
u8 dMNVSItemSwitch_ToggleOff_tex[] = {
    #include <MNVSItemSwitch/ToggleOff.i4.inc.c>
};

Bitmap dMNVSItemSwitch_ToggleOff_bitmaps[] = {
	{ 23, 32, 0, 0, dMNVSItemSwitch_ToggleOff_tex, 8, 0 },
};

/* Sprite: ToggleOff (23x8 i4) */
Sprite dMNVSItemSwitch_ToggleOff = {
	0, 0,
	23, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_ToggleOff_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
