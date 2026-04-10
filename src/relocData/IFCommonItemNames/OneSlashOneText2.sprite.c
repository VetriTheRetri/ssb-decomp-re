/* Sprite: OneSlashOneText2 */

Gfx dIFCommonItemNames_OneSlashOneText2_dl[] = { gsSPEndDisplayList() };

/* Texture: OneSlashOneText2 (22(24)x16 ia8) */
u8 dIFCommonItemNames_OneSlashOneText2_tex[] = {
    #include <IFCommonItemNames/OneSlashOneText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_OneSlashOneText2_bitmaps[] = {
	{ 22, 24, 0, 0, dIFCommonItemNames_OneSlashOneText2_tex, 16, 0 },
};

/* Sprite: OneSlashOneText2 (22x16 ia8) */
Sprite dIFCommonItemNames_OneSlashOneText2 = {
	0, 0,
	22, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dIFCommonItemNames_OneSlashOneText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
