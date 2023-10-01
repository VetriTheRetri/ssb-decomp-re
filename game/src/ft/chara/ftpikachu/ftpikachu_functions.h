#ifndef _FTPIKACHU_FUNCTIONS_H_
#define _FTPIKACHU_FUNCTIONS_H_

#include <ssb_types.h>

#include <ft/ftdef.h>
#include <mp/mpdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftPikachu_SpecialN_ProcAccessory(GObj *fighter_gobj);
void ftPikachu_SpecialN_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftPikachu_SpecialN_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirN_SetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftPikachu_SpecialLw_CreateThunder(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_UpdateThunder(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwStart_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwStart_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwStart_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_InitStatusVars(GObj *fighter_gobj);
void ftPikachu_SpecialLwStart_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwStart_SetStatus(GObj *fighter_gobj);
sb32 ftPikachu_SpecialLw_CheckCollideThunder(GObj *fighter_gobj);
void ftPikachu_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwLoop_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialLwLoop_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwLoop_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialLw_ProcDamage(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwLoop_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialLwLoop_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialLwLoop_UpdateThunder(GObj *fighter_gobj);
void ftPikachu_SpecialLwLoop_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialLwHit_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwHit_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwHit_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialLwHit_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwHit_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwHit_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialLwHit_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialLwHit_InitStatusVars(GObj *fighter_gobj);
void ftPikachu_SpecialLwHit_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwHit_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwEnd_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialLwEnd_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwEnd_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwEnd_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialLwEnd_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialLw_ClearProcDamage(GObj *fighter_gobj);
void ftPikachu_SpecialLwEnd_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftPikachu_SpecialHiStart_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiStart_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiStart_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialHiStart_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiStart_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiStart_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialHiStart_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialHiStart_InitStatusVars(GObj *fighter_gobj);
void ftPikachu_SpecialHi_InitMiscVars(GObj *fighter_gobj);
void ftPikachu_SpecialHiStart_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiStart_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirHi_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialHi_UpdateModelPitchScale(GObj *fighter_gobj);
void ftPikachu_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialHi_UpdateModelPitchScale(GObj *fighter_gobj);
void ftPikachu_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialHi_ProcMap(GObj *fighter_gobj);
sb32 ftPikachu_SpecialHi_CheckIgnorePass(GObj *fighter_gobj);
void ftPikachu_SpecialAirHi_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj);
void ftPikachu_SpecialHi_InitStatusVarsZip(GObj *fighter_gobj);
void ftPikachu_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirHi_SetStatus(GObj *fighter_gobj);
sb32 ftPikachu_SpecialHi_CheckGotoSubZip(GObj *fighter_gobj);
void ftPikachu_SpecialHiEnd_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj);
void ftPikachu_SpecialHiEnd_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiEnd_ProcPhysics(GObj *fighter_gobj);
void ftPikachu_SpecialHiEnd_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiEnd_ProcMap(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiEnd_SwitchStatusGround(GObj *fighter_gobj); // Unused;
void ftPikachu_SpecialHiEnd_SwitchStatusAir(GObj *fighter_gobj);
void ftPikachu_SpecialHiEnd_BackupVel(GObj *fighter_gobj);
void ftPikachu_SpecialHiEnd_SetStatus(GObj *fighter_gobj);
void ftPikachu_SpecialAirHiEnd_SetStatus(GObj *fighter_gobj);

#endif