#ifndef _GROUND_H_
#define _GROUND_H_

#include "grtypes.h"
#include "grfunctions.h"

extern intptr_t lGRCommonHeaderStart;                   // 0x00000014

extern GRObstacle gHazards[2];
extern GRHazard gEnvironmentironments[1];
extern s32 gHazardCount;
extern s32 gEnvironmentironmentCount;
extern GRStruct gGRCommonStruct;

#endif
