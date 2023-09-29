#ifndef _FTDONKEY_FUNCTIONS_H_
#define _FTDONKEY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftDonkey_SpecialN_ProcDamage(GObj *fighter_gobj);
void ftDonkey_SpecialNStart_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialAirNStart_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialNStart_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_SpecialNStart_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirNStart_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj);
void ftDonkey_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirNLoop_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_SetProcDamageAnimRate(GObj *fighter_gobj);
void ftDonkey_SpecialAirNLoop_SwitchStatusGround(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_SwitchStatusAir(GObj *fighter_gobj);
void ftDonkey_SpecialNLoop_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialAirNLoop_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialNEnd_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialAirNEnd_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj);
void ftDonkey_SpecialN_GetStatusChargeLevelReset(GObj *fighter_gobj);
void ftDonkey_SpecialNEnd_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialAirNEnd_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftDonkey_SpecialNStart_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialAirNStart_SetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftDonkey_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialAirHi_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftDonkey_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftDonkey_SpecialHi_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirHi_ProcMap(GObj *fighter_gobj);
void ftDonkey_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj);
void ftDonkey_SpecialHi_SwitchStatusAir(GObj *fighter_gobj);
void ftDonkey_SpecialHi_SetStatusFlagGA(GObj *fighter_gobj, bool32 ground_or_air);
void ftDonkey_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialAirHi_SetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftDonkey_SpecialLwStart_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_SpecialLwLoop_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_SpecialLwLoop_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialLwEnd_SetStatus(GObj *fighter_gobj);
void ftDonkey_SpecialLwStart_SetStatus(GObj *fighter_gobj);

// The ThrowF functions are grouped with the Common action states, but I felt like 
// it would be cleaner if I declared them here instead. After all, only DK uses them.


// ThrowFWait
void ftDonkey_ThrowFWait_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_ThrowFWait_ProcMap(GObj *fighter_gobj);
void ftDonkey_ThrowFWait_SetStatus(GObj *fighter_gobj);
bool32 ftDonkey_ThrowFWait_CheckInterruptThrowFWalk(GObj *fighter_gobj);

// ThrowFWalk
f32 ftDonkey_ThrowFWalk_GetWalkAnimSpeed(ftStruct *fp, s32 status_id);
void ftDonkey_ThrowFWalk_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_ThrowFWalk_SetStatusParam(GObj *fighter_gobj, f32 frame_begin);
void ftDonkey_ThrowFWalk_SetStatusDefault(GObj *fighter_gobj);
bool32 ftDonkey_ThrowFWalk_CheckInterruptThrowFWait(GObj *fighter_gobj);

// ThrowFTurn
void ftDonkey_ThrowFTurn_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_ThrowFTurn_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_ThrowFTurn_SetStatus(GObj *fighter_gobj);
bool32 ftDonkey_ThrowFTurn_CheckInterruptThrowFCommon(GObj *fighter_gobj);

// ThrowFKneeBend
void ftDonkey_ThrowFKneeBend_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_ThrowFKneeBend_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_ThrowFKneeBend_SetStatus(GObj *fighter_gobj, s32 input_source);
bool32 ftDonkey_ThrowFKneeBend_CheckInterruptThrowFCommon(GObj *fighter_gobj);

// ThrowFFall
void ftDonkey_ThrowFFall_ProcInterrupt(GObj *fighter_gobj);
void ftDonkey_ThrowFFall_ProcMap(GObj *fighter_gobj);
void ftDonkey_ThrowFFall_SetStatus(GObj *fighter_gobj);
void ftDonkey_ThrowFJump_SetStatus(GObj *fighter_gobj);
void ftDonkey_ThrowFFall_SetStatusPass(GObj *fighter_gobj);
bool32 ftDonkey_ThrowFFall_CheckInterruptPass(GObj *fighter_gobj);

// ThrowFLanding
void ftDonkey_ThrowFLanding_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_ThrowFLanding_SetStatus(GObj *fighter_gobj);

// ThrowFDamage
void ftDonkey_ThrowFDamage_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_ThrowFDamage_SetStatus(GObj *fighter_gobj);

// ThrowFF / ThrowAirFF
void ftDonkey_ThrowFF_ProcUpdate(GObj *fighter_gobj);
void ftDonkey_ThrowAirFF_SwitchStatusGround(GObj *fighter_gobj);
void ftDonkey_ThrowFF_SwitchStatusAir(GObj *fighter_gobj);
void ftDonkey_ThrowFF_ProcMap(GObj *fighter_gobj);
void ftDonkey_ThrowAirFF_ProcMap(GObj *fighter_gobj);
void ftDonkey_ThrowFF_SetStatus(GObj *fighter_gobj, bool32 is_turn);
bool32 ftDonkey_ThrowFF_CheckInterruptThrowFCommon(GObj *fighter_gobj);

#endif