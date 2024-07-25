#ifndef _GROUND_H_
#define _GROUND_H_

#include "grtypes.h"
#include "grfunctions.h"

extern intptr_t lGRCommonHeaderStart;               // 0x00000014

extern grCommonData* gMPGroundData; // TO DO: move this to the correct file (is this the correct
								  // file? NO, this is Patrick!)

extern grMapObject gMapObjects[2];
extern grMapEnvironment gMapEnvironments[1];
extern s32 gMapObjectCount;
extern s32 gMapEnvironmentCount;
extern grStruct gGroundStruct;

#endif
