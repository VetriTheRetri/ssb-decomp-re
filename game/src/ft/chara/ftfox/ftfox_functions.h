#ifndef _FTFOX_FUNCTIONS_H_
#define _FTFOX_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftFox_SpecialN_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialN_ProcInterrupt(GObj *fighter_gobj);
void ftFox_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftFox_SpecialN_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirN_SetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftFox_SpecialHiStart_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialAirHiStart_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialAirHiStart_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialHiStart_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiStart_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiStart_SwitchStatusGround(GObj *fighter_gobj);
void ftFox_SpecialHiStart_SwitchStatusAir(GObj *fighter_gobj);
void ftFox_SpecialHiHold_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialHiHold_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiHold_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiHold_SwitchStatusGround(GObj *fighter_gobj);
void ftFox_SpecialHiHold_SwitchStatusAir(GObj *fighter_gobj);
void ftFox_SpecialHiHold_InitStatusVars(GObj *fighter_gobj);
void ftFox_SpecialHiHold_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHiHold_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialHi_UpdateModelPitch(GObj *fighter_gobj);
void ftFox_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialHi_ProcMap(GObj *fighter_gobj);
bool32 ftFox_SpecialHi_CheckIgnorePass(GObj *fighter_gobj);
void ftFox_SpecialAirHi_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHi_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialHi_InitStatusVars(ftStruct *fp);
void ftFox_SpecialHi_DecideSetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHi_FromGroundSetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialHiEnd_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialAirHiEnd_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiEnd_SwitchStatusGround(GObj *fighter_gobj);
void ftFox_SpecialHiEnd_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHiEnd_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHiBound_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialAirHiBound_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialAirHiBound_ProcMap(GObj *fighter_gobj);
void ftFox_SpecialAirHiBound_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialHiStart_InitGravity(ftStruct *fp);
void ftFox_SpecialHiStart_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirHiStart_SetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftFox_SpecialLw_CheckSetRelease(ftStruct *fp);
void ftFox_SpecialLw_UpdateGFX(ftStruct *fp);
void ftFox_SpecialLw_DecReleaseLag(ftStruct *fp);
void ftFox_SpecialLwStart_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialAirLwCommon_ProcPhysics(GObj *fighter_gobj);
void ftFox_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialLwLoop_ProcInterrupt(GObj *fighter_gobj);
void ftFox_SpecialLwLoop_SetReflectFlag(GObj *fighter_gobj);
void ftFox_SpecialLwLoop_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialLwHit_DecideSetStatus(GObj *fighter_gobj);
void ftFox_SpecialLwHit_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialLwHit_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialLwTurn_DecTurnFrames(GObj *fighter_gobj);
void ftFox_SpecialLwTurn_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialLwTurn_InitStatusVars(GObj *fighter_gobj);
void ftFox_SpecialLwTurn_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirLwTurn_SetStatus(GObj *fighter_gobj);
bool32 ftFox_SpecialLwTurn_CheckInterruptSpecialLwLoop(GObj *fighter_gobj);
void ftFox_SpecialLwEnd_ProcUpdate(GObj *fighter_gobj);
void ftFox_SpecialLwEnd_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialLwStart_InitStatusVars(GObj *fighter_gobj);
void ftFox_SpecialLwStart_SetStatus(GObj *fighter_gobj);
void ftFox_SpecialAirLwStart_SetStatus(GObj *fighter_gobj);

#endif
