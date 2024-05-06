#ifndef _FTNESS_FUNCTIONS_H_
#define _FTNESS_FUNCTIONS_H_

#include <ssb_types.h>

#include <ft/ftdef.h>
#include <mp/mpdef.h>
#include <sys/objdef.h>

// JumpAerial
void ftNess_JumpAerial_ProcPhysics(GObj* fighter_gobj); // Same story as Yoshi's JumpAerial physics

// Appear
void ftNess_AppearStart_ProcUpdate(GObj* fighter_gobj);
void ftNess_AppearWait_ProcUpdate(GObj* fighter_gobj);
void ftNess_AppearWait_SetStatus(GObj* fighter_gobj);
void ftNess_AppearEnd_SetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftNess_SpecialN_ProcAccessory(GObj* fighter_gobj);
void ftNess_SpecialN_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftNess_SpecialN_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirN_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftNess_SpecialHi_DecThunderTimers(ftStruct* fp);
void ftNess_SpecialHi_CreatePKThunder(GObj* fighter_gobj);
sb32 ftNess_SpecialHi_CheckCollidePKThunder(GObj* fighter_gobj);
void ftNess_SpecialHiStart_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialAirHiStart_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialHi_ProcPhysics(GObj* fighter_gobj);
void ftNess_SpecialAirHi_ProcPhysics(GObj* fighter_gobj);
void ftNess_SpecialHiStart_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirHiStart_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirHiStart_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialHiStart_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialHi_InitStatusVars(GObj* fighter_gobj);
void ftNess_SpecialHiStart_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirHiStart_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialHi_UpdatePKThunder(GObj* fighter_gobj);
void ftNess_SpecialHiHold_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialAirHiHold_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialHiHold_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirHiHold_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialHi_SetPKThunderDestroy(GObj* fighter_gobj); // Unused
void ftNess_SpecialAirHiHold_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialHiHold_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialHiHold_InitStatusVars(GObj* fighter_gobj);
void ftNess_SpecialHiHold_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirHiHold_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirHiEnd_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialHiEnd_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirHiEnd_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirHiEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialHiEnd_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialHi_ClearProcDamage(GObj* fighter_gobj);
void ftNess_SpecialHiEnd_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirHiEnd_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialHi_CollideWallPhysics(GObj* fighter_gobj, mpCollData* coll_data);
void ftNess_SpecialHi_UpdateModelPitch(GObj* fighter_gobj);
void ftNess_Jibaku_ProcUpdate(GObj* fighter_gobj);
void ftNess_JibakuAir_ProcUpdate(GObj* fighter_gobj);
void ftNess_Jibaku_ProcPhysics(GObj* fighter_gobj);
void ftNess_JibakuAir_ProcPhysics(GObj* fighter_gobj);
sb32 ftNess_SpecialHi_CheckIgnorePass(GObj* fighter_gobj);
void ftNess_Jibaku_ProcMap(GObj* fighter_gobj);
void ftNess_JibakuAir_ProcMap(GObj* fighter_gobj);
void ftNess_JibakuAir_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_Jibaku_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_Jibaku_InitStatusVars(GObj* fighter_gobj);
void ftNess_Jibaku_SetStatus(GObj* fighter_gobj);
void ftNess_JibakuAir_SetStatus(GObj* fighter_gobj);
void ftNess_JibakuAirBound_ProcUpdate(GObj* fighter_gobj);
void ftNess_JibakuAirBound_ProcMap(GObj* fighter_gobj);
void ftNess_JibakuAirBound_SetStatus(GObj* fighter_gobj, Vec3f* angle, Vec3f* pos);

// SpecialLw / SpecialAirLw
void ftNess_SpecialLw_CheckRelease(ftStruct* fp);
void ftNess_SpecialLw_DecReleaseLag(ftStruct* fp);
void ftNess_SpecialLw_ProcAbsorb(GObj* fighter_gobj);
void ftNess_SpecialLwStart_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialAirLwStart_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialLw_ProcPhysics(GObj* fighter_gobj);
void ftNess_SpecialAirLw_ProcPhysics(GObj* fighter_gobj);
void ftNess_SpecialLwStart_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwStart_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwStart_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpeciaLwStart_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpeciaLw_InitStatusVars(GObj* fighter_gobj);
void ftNess_SpeciaLwStart_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirLwStart_SetStatus(GObj* fighter_gobj);
void ftNess_SpeciaLw_UpdateReleaseLag(GObj* fighter_gobj);
void ftNess_SpecialLwHold_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialAirLwHold_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialLwHold_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwHold_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwHold_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialLwHold_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialLw_InitVars(GObj* fighter_gobj);
void ftNess_SpecialLwHold_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirLwHold_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialLwHit_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialAirLwHit_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialLwHit_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwHit_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwHit_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialLwHit_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialLwHit_SetAbsorbTrue(GObj* fighter_gobj);
void ftNess_SpecialLwHit_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirLwHit_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirLwEnd_ProcUpdate(GObj* fighter_gobj);
void ftNess_SpecialLwEnd_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwEnd_ProcMap(GObj* fighter_gobj);
void ftNess_SpecialAirLwEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftNess_SpecialLwEnd_SwitchStatusAir(GObj* fighter_gobj);
void ftNess_SpecialLwEnd_SetStatus(GObj* fighter_gobj);
void ftNess_SpecialAirLwEnd_SetStatus(GObj* fighter_gobj);

#endif
