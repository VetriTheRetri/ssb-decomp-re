#ifndef _MN_TITLE_H_
#define _MN_TITLE_H_

typedef struct mnTitleTextureConfig
{
	s32 x;
	s32 y;
	intptr_t offset;

} mnTitleTextureConfig;

typedef enum mnTitleLayout
{
    nMNTitleLayoutIntro,        // logo animation intro
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