/* Sprite: LetterF */

Gfx dIFCommonAnnounceCommon_LetterF_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterF (20(24)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterF_tex[] = {
    #include <IFCommonAnnounceCommon/LetterF.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterF_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonAnnounceCommon_LetterF_tex, 37, 0 },
};

/* Sprite: LetterF (20x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterF = {
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterF_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
