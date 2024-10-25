#ifndef _MN_TITLE_H_
#define _MN_TITLE_H_

#include <ssb_types.h>

extern uintptr_t lMNTitleScreenParticleBankScriptsLo; 	// 0x00B22C30
extern uintptr_t lMNTitleScreenParticleBankScriptsHi; 	// 0x00B22D40
extern uintptr_t lMNTitleScreenParticleBankTexturesLo; 	// 0x00B22D40
extern uintptr_t lMNTitleScreenParticleBankTexturesHi; 	// 0x00B277B0

extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_1; // 251D0 file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_2; // 26020 file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1; // 25350 file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2; // 26130 file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_1; // 258D0 file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_2; // 262C0 file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1; // 287D8 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2; // 28DA8 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3; // 25E70 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4; // 25F60 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1; // 28EB0 file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2; // 29010 file 0x0A7 offset for Slash Effect GFX

extern intptr_t lMNTitleLogoAnimCutoutSprite;		// 0x00008FC8
extern intptr_t lMNTitleLogoAnimStrikeVSprite;		// 0x000097E8
extern intptr_t lMNTitleLogoAnimStrikeHSprite;		// 0x00009B48
extern intptr_t lMNTitleLogoAnimFullSprite;			// 0x0000BBB0
extern intptr_t lMNTitleBorderUpperSprite;			// 0x0000C208
extern intptr_t lMNTitleTMSprite;					// 0x0000F398
extern intptr_t lMNTitleCutoutSprite;				// 0x00011988
extern intptr_t lMNTitleTMUnkSprite;				// 0x00011AA8
extern intptr_t lMNTitleCopyrightSprite;			// 0x00015320
extern intptr_t lMNTitlePressStartSprite;			// 0x00015A48
extern intptr_t lMNTitleSuperSprite;				// 0x00016728
extern intptr_t lMNTitleSmashSprite;				// 0x000245C8
extern intptr_t lMNTitleBrosSprite;					// 0x00025188

extern intptr_t lMNTitleFireAnimFrame1Sprite;		// 0x00001018
extern intptr_t lMNTitleFireAnimFrame2Sprite;		// 0x00002078
extern intptr_t lMNTitleFireAnimFrame3Sprite;		// 0x000030D8
extern intptr_t lMNTitleFireAnimFrame4Sprite;		// 0x00004138
extern intptr_t lMNTitleFireAnimFrame5Sprite;		// 0x00005198
extern intptr_t lMNTitleFireAnimFrame6Sprite;		// 0x000061F8
extern intptr_t lMNTitleFireAnimFrame7Sprite;		// 0x00007258
extern intptr_t lMNTitleFireAnimFrame8Sprite;		// 0x000082B8
extern intptr_t lMNTitleFireAnimFrame9Sprite;		// 0x00009318
extern intptr_t lMNTitleFireAnimFrame10Sprite;		// 0x0000A378
extern intptr_t lMNTitleFireAnimFrame11Sprite;		// 0x0000B3D8
extern intptr_t lMNTitleFireAnimFrame12Sprite;		// 0x0000C438
extern intptr_t lMNTitleFireAnimFrame13Sprite;		// 0x0000D498
extern intptr_t lMNTitleFireAnimFrame14Sprite;		// 0x0000E4F8
extern intptr_t lMNTitleFireAnimFrame15Sprite;		// 0x0000F558
extern intptr_t lMNTitleFireAnimFrame16Sprite;		// 0x000105B8
extern intptr_t lMNTitleFireAnimFrame17Sprite;		// 0x00011618
extern intptr_t lMNTitleFireAnimFrame18Sprite;		// 0x00012678
extern intptr_t lMNTitleFireAnimFrame19Sprite;		// 0x000136D8
extern intptr_t lMNTitleFireAnimFrame20Sprite;		// 0x00014738
extern intptr_t lMNTitleFireAnimFrame21Sprite;		// 0x00015798
extern intptr_t lMNTitleFireAnimFrame22Sprite;		// 0x000167F8
extern intptr_t lMNTitleFireAnimFrame23Sprite;		// 0x00017858
extern intptr_t lMNTitleFireAnimFrame24Sprite;		// 0x000188B8
extern intptr_t lMNTitleFireAnimFrame25Sprite;		// 0x00019918
extern intptr_t lMNTitleFireAnimFrame26Sprite;		// 0x0001A978
extern intptr_t lMNTitleFireAnimFrame27Sprite;		// 0x0001B9D8
extern intptr_t lMNTitleFireAnimFrame28Sprite;		// 0x0001CA38
extern intptr_t lMNTitleFireAnimFrame29Sprite;		// 0x0001DA98
extern intptr_t lMNTitleFireAnimFrame30Sprite;		// 0x0001EAF8

typedef struct mnTitleSpriteDesc
{
	Vec2i pos;
	intptr_t offset;

} mnTitleSpriteDesc;

typedef enum mnTitleLayout
{
    nMNTitleLayoutOpening,      // logo animation intro
    nMNTitleLayoutAnimate,      // Super Smash Bros. animation
    nMNTitleLayoutFinal         // final layout

} mnTitleLayout;


typedef enum mnTitleTextureIndex
{
    nMNTitleTextureIndexDropShadow,
    nMNTitleTextureIndexSmash,
    nMNTitleTextureIndexSuper,
    nMNTitleTextureIndexBros,
    nMNTitleTextureIndexTM,
    nMNTitleTextureIndexFooter,
    nMNTitleTextureIndexHeader,
    nMNTitleTextureIndexPressStart,
    nMNTitleTextureIndexLogo,
    nMNTitleTextureIndexTM2

} mnTitleTextureIndex;

#define TAKE_MAX(a, b) \
if ((a) < (b)) (a) = (b) \

#define TAKE_MIN(a, b) \
if ((a) > (b)) (a) = (b) \

#endif