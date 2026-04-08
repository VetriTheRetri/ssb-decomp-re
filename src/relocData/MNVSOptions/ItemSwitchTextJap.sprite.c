/* Sprite: ItemSwitchTextJap */

Gfx dMNVSOptions_ItemSwitchTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ItemSwitchTextJap (104x15 ia8) */
u8 dMNVSOptions_ItemSwitchTextJap_tex[] = {
    #include <MNVSOptions/ItemSwitchTextJap.ia8.inc.c>
};

Bitmap dMNVSOptions_ItemSwitchTextJap_bitmaps[] = {
	{ 104, 104, 0, 0, dMNVSOptions_ItemSwitchTextJap_tex, 15, 0 },
};

/* Sprite: ItemSwitchTextJap (104x15 ia8) */
Sprite dMNVSOptions_ItemSwitchTextJap = {
	0, 0,
	104, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSOptions_ItemSwitchTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
