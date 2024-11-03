#ifndef _SCENE_H_
#define _SCENE_H_

#include "sctypes.h"
#include "scoverlay.h"
#include "scfunctions.h"

extern f32 dSCSubsysFighterScales[/* */];

extern SCBattleState *gSCManagerBattleState, gSCManagerDefaultBattleState, gSCManager1PGameBattleState, gSCManagerTransferBattleState, gSCManagerVSBattleState;
extern SCCommonData gSCManagerSceneData, dSCManagerDefaultSceneData;
extern LBBackupData gSCManagerBackupData, dSCManagerDefaultBackupData;

extern char dSCManagerBuildDate[/* */];

#endif
