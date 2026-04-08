/* Sprite: PhotosensitivityWarningTextJap */

Gfx dMNOption_PhotosensitivityWarningTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: PhotosensitivityWarningTextJap (164(168)x107 ia8, 5 tiles) */
u8 dMNOption_PhotosensitivityWarningTextJap_tex[] = {
    #include <MNOption/PhotosensitivityWarningTextJap.ia8.inc.c>
};

Bitmap dMNOption_PhotosensitivityWarningTextJap_bitmaps[] = {
	{ 164, 168, 0, 0, dMNOption_PhotosensitivityWarningTextJap_tex, 24, 0 },
	{ 164, 168, 0, 0, dMNOption_PhotosensitivityWarningTextJap_tex + 0xFC8, 24, 0 },
	{ 164, 168, 0, 0, dMNOption_PhotosensitivityWarningTextJap_tex + 0x1F90, 24, 0 },
	{ 164, 168, 0, 0, dMNOption_PhotosensitivityWarningTextJap_tex + 0x2F58, 24, 0 },
	{ 164, 168, 0, 0, dMNOption_PhotosensitivityWarningTextJap_tex + 0x3F20, 11, 0 },
};

/* Sprite: PhotosensitivityWarningTextJap (164x103 ia8) */
Sprite dMNOption_PhotosensitivityWarningTextJap = {
	0, 0,
	164, 103,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	5, 84,
	23, 24,
	3, 1,
	(Bitmap*)dMNOption_PhotosensitivityWarningTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
