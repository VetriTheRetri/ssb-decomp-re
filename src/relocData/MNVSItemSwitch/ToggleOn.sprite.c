/* Sprite: ToggleOn */

Gfx dMNVSItemSwitch_ToggleOn_dl[] = { gsSPEndDisplayList() };

/* Texture: ToggleOn (19(32)x8 i4) */
u8 dMNVSItemSwitch_ToggleOn_tex[] = {
    #include <MNVSItemSwitch/ToggleOn.i4.inc.c>
};

Bitmap dMNVSItemSwitch_ToggleOn_bitmaps[] = {
	{ 19, 32, 0, 0, dMNVSItemSwitch_ToggleOn_tex, 8, 0 },
};

/* Sprite: ToggleOn (19x8 i4) */
Sprite dMNVSItemSwitch_ToggleOn = {
	0, 0,
	19, 8,
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
	(Bitmap*)dMNVSItemSwitch_ToggleOn_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
