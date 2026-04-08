/* Sprite: Frame12 */

Gfx dMNTitleFireAnim_Frame12_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame12 (32x32 rgba32) */
u8 dMNTitleFireAnim_Frame12_tex[] = {
    #include <MNTitleFireAnim/Frame12.rgba32.inc.c>
};

Bitmap dMNTitleFireAnim_Frame12_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitleFireAnim_Frame12_tex, 32, 0 },
};

/* Sprite: Frame12 (32x32 rgba32) */
Sprite dMNTitleFireAnim_Frame12 = {
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
	(Bitmap*)dMNTitleFireAnim_Frame12_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
