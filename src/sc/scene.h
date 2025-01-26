#ifndef _SCENE_H_
#define _SCENE_H_

#include "sctypes.h"
#include "scoverlay.h"
#include "scfunctions.h"

extern char dSCManagerBuildDate[/* */];
extern f32 dSCSubsysDemoFighterScales[/* */];

extern s32 gSCManagerUnkown0x800A50F0;
extern u32 gSCManagerCIC;

extern SCBattleState
*gSCManagerBattleState,
dSCManagerDefaultBattleState, 
gSCManager1PGameBattleState,
gSCManagerTransferBattleState,
gSCManagerVSBattleState;

extern SCCommonData gSCManagerSceneData, dSCManagerDefaultSceneData;
extern LBBackupData gSCManagerBackupData, dSCManagerDefaultBackupData;

#endif
