/* Sprite: LetterO */

Gfx dIFCommonAnnounceCommon_LetterO_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterO (34(40)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterO_tex[] = {
    #include <IFCommonAnnounceCommon/LetterO.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterO_bitmaps[] = {
	{ 34, 40, 0, 0, dIFCommonAnnounceCommon_LetterO_tex, 37, 0 },
};

/* Sprite: LetterO (34x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterO = {
	0, 0,
	34, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterO_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
