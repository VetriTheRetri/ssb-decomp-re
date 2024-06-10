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
void ftDonkeySpecialNStartSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialAirNStartSetStatus(GObj* fighter_gobj);

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
void ftDonkeySfpecialHiSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialAirHiSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftDonkeySpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopProcUpdate(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopProcInterrupt(GObj* fighter_gobj);
void ftDonkeySpecialLwLoopSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialLwEndSetStatus(GObj* fighter_gobj);
void ftDonkeySpecialLwStartSetStatus(GObj* fighter_gobj);

// The ThrowF functions are grouped with the Common action states, but I felt
// like it would be cleaner if I declared them here instead. After all, only DK
// uses them.

// ThrowFWait
void ftDonkeyThrowFWaitProcInterrupt(GObj* fighter_gobj);
void ftDonkeyThrowFCommonProcMap(GObj* fighter_gobj);
void ftDonkeyThrowFWaitSetStatus(GObj* fighter_gobj);
sb32 ftDonkeyThrowFWaitCheckInterruptThrowFWalk(GObj* fighter_gobj);

// ThrowFWalk
f32 ftDonkeyThrowFWalkGetWalkAnimSpeed(ftStruct* fp, s32 status_id);
void ftDonkeyThrowFWalkProcInterrupt(GObj* fighter_gobj);
void ftDonkeyThrowFWalkSetStatusParam(GObj* fighter_gobj, f32 frame_begin);
void ftDonkeyThrowFWalkSetStatusDefault(GObj* fighter_gobj);
sb32 ftDonkeyThrowFWalkCheckInterruptThrowFWait(GObj* fighter_gobj);

// ThrowFTurn
void ftDonkeyThrowFTurnProcUpdate(GObj* fighter_gobj);
void ftDonkeyThrowFTurnProcInterrupt(GObj* fighter_gobj);
void ftDonkeyThrowFTurnSetStatus(GObj* fighter_gobj);
sb32 ftDonkeyThrowFTurnCheckInterruptThrowFCommon(GObj* fighter_gobj);

// ThrowFKneeBend
void ftDonkeyThrowFKneeBendProcUpdate(GObj* fighter_gobj);
void ftDonkeyThrowFKneeBendProcInterrupt(GObj* fighter_gobj);
void ftDonkeyThrowFKneeBendSetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftDonkeyThrowFKneeBendCheckInterruptThrowFCommon(GObj* fighter_gobj);

// ThrowFFall
void ftDonkeyThrowFFallProcInterrupt(GObj* fighter_gobj);
void ftDonkeyThrowFFallProcMap(GObj* fighter_gobj);
void ftDonkeyThrowFFallSetStatus(GObj* fighter_gobj);
void ftDonkeyThrowFJumpSetStatus(GObj* fighter_gobj);
void ftDonkeyThrowFFallSetStatusPass(GObj* fighter_gobj);
sb32 ftDonkeyThrowFFallCheckInterruptPass(GObj* fighter_gobj);

// ThrowFLanding
void ftDonkeyThrowFLandingProcUpdate(GObj* fighter_gobj);
void ftDonkeyThrowFLandingSetStatus(GObj* fighter_gobj);

// ThrowFDamage
void ftDonkeyThrowFDamageProcUpdate(GObj* fighter_gobj);
void ftDonkeyThrowFDamageSetStatus(GObj* fighter_gobj);

// ThrowFF / ThrowAirFF
void ftDonkeyThrowFFProcUpdate(GObj* fighter_gobj);
void ftDonkeyThrowAirFFSwitchStatusGround(GObj* fighter_gobj);
void ftDonkeyThrowFFSwitchStatusAir(GObj* fighter_gobj);
void ftDonkeyThrowFFProcMap(GObj* fighter_gobj);
void ftDonkeyThrowAirFFProcMap(GObj* fighter_gobj);
void ftDonkeyThrowFFSetStatus(GObj* fighter_gobj, sb32 is_turn);
sb32 ftDonkeyThrowFFCheckInterruptThrowFCommon(GObj* fighter_gobj);

#endif
