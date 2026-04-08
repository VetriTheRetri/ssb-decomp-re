/* Sprite: OptionTab */

Gfx dMN1P_OptionTab_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionTab (160x19 ia8) */
u8 dMN1P_OptionTab_tex[] = {
    #include <MN1P/OptionTab.ia8.inc.c>
};

Bitmap dMN1P_OptionTab_bitmaps[] = {
	{ 160, 160, 0, 0, dMN1P_OptionTab_tex, 19, 0 },
};

/* Sprite: OptionTab (160x19 ia8) */
Sprite dMN1P_OptionTab = {
	0, 0,
	160, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	3, 1,
	(Bitmap*)dMN1P_OptionTab_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
