#ifndef _FTDONKEY_FUNCTIONS_H_
#define _FTDONKEY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftDonkeySpecialNProcDamage(GObj* fighter_gobj);
void ftDonkeySpecialNStartProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialAirNStartProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialNStartProcInterrupt(GObj* fighter_gobj);
void ftDonkeySpecialNStartProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirNStartProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirNStartSwitchStatusGround(GObj* fighter_gobj);
void ftDonkeySpecialNStartSwitchStatusAir(GObj* fighter_gobj);
void ftDonkeySpecialNLoopProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialNLoopProcInterrupt(GObj* fighter_gobj);
void ftDonkeySpecialNLoopProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirNLoopProcMap(GObj* fighter_gobj);
void ftDonkeySpecialNLoopSetProcDamageAnimRate(GObj* fighter_gobj);
void ftDonkeySpecialAirNLoopSwitchStatusGround(GObj* fighter_gobj);
void ftDonkeySpecialNLoopSwitchStatusAir(GObj* fighter_gobj);
void ftDonkeySpecialNLoopSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialAirNLoopSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialNEndProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialAirNEndProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirNEndSwitchStatusGround(GObj* fighter_gobj);
void ftDonkeySpecialNGetStatusChargeLevelReset(GObj* fighter_gobj);
void ftDonkeySpecialNEndSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialAirNEndSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialNInitStatusVars(GObj* fighter_gobj);
void ftDonkey_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftDonkey_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftDonkeySpecialHiProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialAirHiProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialHiProcPhysics(GObj* fighter_gobj);
void ftDonkeySpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftDonkeySpecialHiProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirHiProcMap(GObj* fighter_gobj);
void ftDonkeySpecialAirHiSwitchStatusGround(GObj* fighter_gobj);
void ftDonkeySpecialHiSwitchStatusAir(GObj* fighter_gobj);
void ftDonkeySpecialHiSetStatusFlagGA(GObj* fighter_gobj, sb32 ground_or_air);
void ftDonkey_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftDonkey_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftDonkeySpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopProcInterrupt(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialLwEndSetStatus(GObj* fighter_gobj);
void ftDonkey_SpecialLwStart_SetStatus(GObj* fighter_gobj);

// The ThrowF functions are grouped with the Common action states, but I felt
// like it would be cleaner if I declared them here instead. After all, only DK
// uses them.

// ThrowFWait
void ftDonkey_ThrowFWait_ProcInterrupt(GObj* fighter_gobj);
void ftDonkey_ThrowFCommon_ProcMap(GObj* fighter_gobj);
void ftDonkey_ThrowFWait_SetStatus(GObj* fighter_gobj);
sb32 ftDonkey_ThrowFWait_CheckInterruptThrowFWalk(GObj* fighter_gobj);

// ThrowFWalk
f32 ftDonkey_ThrowFWalk_GetWalkAnimSpeed(ftStruct* fp, s32 status_id);
void ftDonkey_ThrowFWalk_ProcInterrupt(GObj* fighter_gobj);
void ftDonkey_ThrowFWalk_SetStatusParam(GObj* fighter_gobj, f32 frame_begin);
void ftDonkey_ThrowFWalk_SetStatusDefault(GObj* fighter_gobj);
sb32 ftDonkey_ThrowFWalk_CheckInterruptThrowFWait(GObj* fighter_gobj);

// ThrowFTurn
void ftDonkey_ThrowFTurn_ProcUpdate(GObj* fighter_gobj);
void ftDonkey_ThrowFTurn_ProcInterrupt(GObj* fighter_gobj);
void ftDonkey_ThrowFTurn_SetStatus(GObj* fighter_gobj);
sb32 ftDonkey_ThrowFTurn_CheckInterruptThrowFCommon(GObj* fighter_gobj);

// ThrowFKneeBend
void ftDonkey_ThrowFKneeBend_ProcUpdate(GObj* fighter_gobj);
void ftDonkey_ThrowFKneeBend_ProcInterrupt(GObj* fighter_gobj);
void ftDonkey_ThrowFKneeBend_SetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftDonkey_ThrowFKneeBend_CheckInterruptThrowFCommon(GObj* fighter_gobj);

// ThrowFFall
void ftDonkey_ThrowFFall_ProcInterrupt(GObj* fighter_gobj);
void ftDonkey_ThrowFFall_ProcMap(GObj* fighter_gobj);
void ftDonkey_ThrowFFall_SetStatus(GObj* fighter_gobj);
void ftDonkey_ThrowFJump_SetStatus(GObj* fighter_gobj);
void ftDonkey_ThrowFFall_SetStatusPass(GObj* fighter_gobj);
sb32 ftDonkey_ThrowFFall_CheckInterruptPass(GObj* fighter_gobj);

// ThrowFLanding
void ftDonkey_ThrowFLanding_ProcUpdate(GObj* fighter_gobj);
void ftDonkey_ThrowFLanding_SetStatus(GObj* fighter_gobj);

// ThrowFDamage
void ftDonkey_ThrowFDamage_ProcUpdate(GObj* fighter_gobj);
void ftDonkey_ThrowFDamage_SetStatus(GObj* fighter_gobj);

// ThrowFF / ThrowAirFF
void ftDonkey_ThrowFF_ProcUpdate(GObj* fighter_gobj);
void ftDonkey_ThrowAirFF_SwitchStatusGround(GObj* fighter_gobj);
void ftDonkey_ThrowFF_SwitchStatusAir(GObj* fighter_gobj);
void ftDonkey_ThrowFF_ProcMap(GObj* fighter_gobj);
void ftDonkey_ThrowAirFF_ProcMap(GObj* fighter_gobj);
void ftDonkey_ThrowFF_SetStatus(GObj* fighter_gobj, sb32 is_turn);
sb32 ftDonkey_ThrowFF_CheckInterruptThrowFCommon(GObj* fighter_gobj);

#endif
