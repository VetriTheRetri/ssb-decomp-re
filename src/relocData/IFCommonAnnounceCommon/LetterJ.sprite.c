/* Sprite: LetterJ */

Gfx dIFCommonAnnounceCommon_LetterJ_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterJ (20(24)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterJ_tex[] = {
    #include <IFCommonAnnounceCommon/LetterJ.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterJ_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonAnnounceCommon_LetterJ_tex, 37, 0 },
};

/* Sprite: LetterJ (20x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterJ = {
	0, 0,
	20, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterJ_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
