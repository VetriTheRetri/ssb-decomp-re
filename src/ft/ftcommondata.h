#ifndef _FTPROGRAMDATA_H_
#define _FTPROGRAMDATA_H_

// Massive file containing data from various files

#include <ssb_types.h>
#include <sys/obj.h>
#include <ft/fttypes.h>
#include <gm/gmtypes.h>

// 8012C830
extern f32 dFTCommonDataHandicapTable[][2];

// 8012C970
extern u16 dFTCommonDataDownBounceSFX[];

// 8012C9A8
extern u16 dFTCommonDataPublicFighterCallFGMs[];

// 8012C9E0
extern FTItemThrow dFTCommonDataItemThrowDescs[];

// 8012CA38
extern FTItemSwing dFTCommonDataItemSwingAnimSpeeds[];

// 8012CA78
extern SYColorRGBA dFTCommonDataShadowColorDefault;

// 8012CA7C
extern SYColorRGBA dFTCommonDataShadowColorTeams[];

// 8012DBD0
extern GMColDesc dGMColScriptsDescs[]; // 0x8012DBD0

#endif
