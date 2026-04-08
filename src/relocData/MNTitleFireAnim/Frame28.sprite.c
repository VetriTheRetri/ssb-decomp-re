/* Sprite: Frame28 */

Gfx dMNTitleFireAnim_Frame28_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame28 (32x32 rgba32) */
u8 dMNTitleFireAnim_Frame28_tex[] = {
    #include <MNTitleFireAnim/Frame28.rgba32.inc.c>
};

Bitmap dMNTitleFireAnim_Frame28_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitleFireAnim_Frame28_tex, 32, 0 },
};

/* Sprite: Frame28 (32x32 rgba32) */
Sprite dMNTitleFireAnim_Frame28 = {
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
	(Bitmap*)dMNTitleFireAnim_Frame28_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
