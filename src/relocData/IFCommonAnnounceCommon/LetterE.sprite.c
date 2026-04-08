/* Sprite: LetterE */

Gfx dIFCommonAnnounceCommon_LetterE_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterE (22(24)x36 ia8) */
u8 dIFCommonAnnounceCommon_LetterE_tex[] = {
    #include <IFCommonAnnounceCommon/LetterE.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterE_bitmaps[] = {
	{ 22, 24, 0, 0, dIFCommonAnnounceCommon_LetterE_tex, 36, 0 },
};

/* Sprite: LetterE (22x36 ia8) */
Sprite dIFCommonAnnounceCommon_LetterE = {
	0, 0,
	22, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterE_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
