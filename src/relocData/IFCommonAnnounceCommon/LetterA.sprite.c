/* Sprite: LetterA */

Gfx dIFCommonAnnounceCommon_LetterA_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterA (35(40)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterA_tex[] = {
    #include <IFCommonAnnounceCommon/LetterA.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterA_bitmaps[] = {
	{ 35, 40, 0, 0, dIFCommonAnnounceCommon_LetterA_tex, 37, 0 },
};

/* Sprite: LetterA (35x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterA = {
	0, 0,
	35, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterA_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
