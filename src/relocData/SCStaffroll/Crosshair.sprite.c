/* Sprite: Crosshair */

/* Texture: Crosshair (29(32)x29 i4) */
u8 dSCStaffroll_Crosshair_tex[] = {
    #include <SCStaffroll/Crosshair.i4.inc.c>
};

Bitmap dSCStaffroll_Crosshair_bitmaps[] = {
	{ 29, 32, 0, 0, dSCStaffroll_Crosshair_tex, 29, 0 },
};

/* Sprite: Crosshair (29x29 i4) */
Sprite dSCStaffroll_Crosshair = {
	0, 0,
	29, 29,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	29, 29,
	4, 0,
	(Bitmap*)dSCStaffroll_Crosshair_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
