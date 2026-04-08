/* Sprite: LetterC */

Gfx dIFCommonAnnounceCommon_LetterC_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterC (24x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterC_tex[] = {
    #include <IFCommonAnnounceCommon/LetterC.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterC_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonAnnounceCommon_LetterC_tex, 37, 0 },
};

/* Sprite: LetterC (24x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterC = {
	0, 0,
	24, 37,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	37, 37,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterC_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
