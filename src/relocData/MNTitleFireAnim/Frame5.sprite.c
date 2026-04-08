/* Sprite: Frame5 */

Gfx dMNTitleFireAnim_Frame5_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame5 (32x32 rgba32) */
u8 dMNTitleFireAnim_Frame5_tex[] = {
    #include <MNTitleFireAnim/Frame5.rgba32.inc.c>
};

Bitmap dMNTitleFireAnim_Frame5_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitleFireAnim_Frame5_tex, 32, 0 },
};

/* Sprite: Frame5 (32x32 rgba32) */
Sprite dMNTitleFireAnim_Frame5 = {
	0, 0,
	32, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	0, 3,
	(Bitmap*)dMNTitleFireAnim_Frame5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
