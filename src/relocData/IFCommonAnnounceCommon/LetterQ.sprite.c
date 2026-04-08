/* Sprite: LetterQ */

Gfx dIFCommonAnnounceCommon_LetterQ_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterQ (37(40)x39 ia8) */
u8 dIFCommonAnnounceCommon_LetterQ_tex[] = {
    #include <IFCommonAnnounceCommon/LetterQ.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterQ_bitmaps[] = {
	{ 37, 40, 0, 0, dIFCommonAnnounceCommon_LetterQ_tex, 39, 0 },
};

/* Sprite: LetterQ (37x39 ia8) */
Sprite dIFCommonAnnounceCommon_LetterQ = {
	0, 0,
	37, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	39, 39,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterQ_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
