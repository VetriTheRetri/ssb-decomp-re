#ifndef _FTSAMUS_FUNCTIONS_H_
#define _FTSAMUS_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftSamus_SpecialN_DestroyChargeShot(ftStruct* fp);
void ftSamus_SpecialN_ProcDamage(GObj* fighter_gobj);
void ftSamus_SpecialN_GetChargeShotPosition(ftStruct* fp, Vec3f* pos);
void ftSamus_SpecialN_SetChargeShotPosition(ftStruct* fp);
void ftSamus_SpecialNStart_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialNStart_ProcInterrupt(GObj* fighter_gobj);
void ftSamus_SpecialNStart_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirNStart_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirNStart_SwitchStatusGround(GObj* fighter_gobj);
void ftSamus_SpecialNStart_SwitchStatusAir(GObj* fighter_gobj);
void ftSamus_SpecialNLoop_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialNLoop_ProcInterrupt(GObj* fighter_gobj);
void ftSamus_SpecialNLoop_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialNLoop_SetStatus(GObj* fighter_gobj);
void ftSamus_SpecialNEnd_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialNEnd_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirNEnd_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirNEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftSamus_SpecialNEnd_SwitchStatusAir(GObj* fighter_gobj);
void ftSamus_SpecialNEnd_SetStatus(GObj* fighter_gobj);
void ftSamus_SpecialAirNEnd_SetStatus(GObj* fighter_gobj);
f32 ftSamus_SpecialNStart_GetAnimPlaybackRate(ftStruct* fp);
void ftSamus_SpecialNStart_InitStatusVars(ftStruct* fp);
void ftSamus_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftSamus_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftSamus_SpecialHi_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialHi_ProcPhysics(GObj* fighter_gobj);
sb32 ftSamus_SpecialHi_CheckIgnorePass(GObj* fighter_gobj);
void ftSamus_SpecialHi_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftSamus_SpecialAirHi_ProcPhysics(GObj* fighter_gobj);
void ftSamus_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftSamus_SpecialLw_CreateBomb(GObj* fighter_gobj);
void ftSamus_SpecialLw_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialAirLw_ProcUpdate(GObj* fighter_gobj);
void ftSamus_SpecialLw_ProcPhysics(GObj* fighter_gobj);
void ftSamus_SpecialAirLw_ProcPhysics(GObj* fighter_gobj);
void ftSamus_SpecialLw_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirLw_ProcMap(GObj* fighter_gobj);
void ftSamus_SpecialAirLw_SwitchStatusGround(GObj* fighter_gobj);
void ftSamus_SpecialLw_TransferStatusAir(GObj* fighter_gobj);
void ftSamus_SpecialLw_SwitchStatusAir(GObj* fighter_gobj);
void ftSamus_SpecialLw_InitStatusVars(ftStruct* fp);
void ftSamus_SpecialLw_SetStatus(GObj* fighter_gobj);
void ftSamus_SpecialAirLw_SetStatus(GObj* fighter_gobj);

#endif
