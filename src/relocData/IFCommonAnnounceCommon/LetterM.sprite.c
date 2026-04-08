/* Sprite: LetterM */

Gfx dIFCommonAnnounceCommon_LetterM_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterM (37(40)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterM_tex[] = {
    #include <IFCommonAnnounceCommon/LetterM.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterM_bitmaps[] = {
	{ 37, 40, 0, 0, dIFCommonAnnounceCommon_LetterM_tex, 37, 0 },
};

/* Sprite: LetterM (37x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterM = {
	0, 0,
	37, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterM_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
