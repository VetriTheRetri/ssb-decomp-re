/* Sprite: LetterH */

Gfx dIFCommonAnnounceCommon_LetterH_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterH (27(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterH_tex[] = {
    #include <IFCommonAnnounceCommon/LetterH.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterH_bitmaps[] = {
	{ 27, 32, 0, 0, dIFCommonAnnounceCommon_LetterH_tex, 37, 0 },
};

/* Sprite: LetterH (27x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterH = {
	0, 0,
	27, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterH_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
