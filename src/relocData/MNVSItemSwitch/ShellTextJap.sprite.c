/* Sprite: ShellTextJap */

Gfx dMNVSItemSwitch_ShellTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ShellTextJap (80x11 i4) */
u8 dMNVSItemSwitch_ShellTextJap_tex[] = {
    #include <MNVSItemSwitch/ShellTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_ShellTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_ShellTextJap_tex, 11, 0 },
};

/* Sprite: ShellTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_ShellTextJap = {
	0, 0,
	80, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_ShellTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
