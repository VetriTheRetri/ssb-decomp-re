#ifndef _FTFOX_FUNCTIONS_H_
#define _FTFOX_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftFoxSpecialNProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialNProcInterrupt(GObj* fighter_gobj);
void ftFoxSpecialNInitStatusVars(GObj* fighter_gobj);
void ftFoxSpecialNSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirNSetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftFoxSpecialHiStartProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialAirHiStartProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialAirHiStartProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialHiStartProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiStartProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiStartSwitchStatusGround(GObj* fighter_gobj);
void ftFoxSpecialHiStartSwitchStatusAir(GObj* fighter_gobj);
void ftFoxSpecialHiHoldProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialHiHoldProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiHoldProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiHoldSwitchStatusGround(GObj* fighter_gobj);
void ftFoxSpecialHiHoldSwitchStatusAir(GObj* fighter_gobj);
void ftFoxSpecialHiHoldInitStatusVars(GObj* fighter_gobj);
void ftFoxSpecialHiHoldSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiHoldSetStatus(GObj* fighter_gobj);
void ftFoxSpecialHiUpdateModelPitch(GObj* fighter_gobj);
void ftFoxSpecialHiProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialHiProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialHiProcMap(GObj* fighter_gobj);
sb32 ftFoxSpecialHiCheckIgnorePass(GObj* fighter_gobj);
void ftFoxSpecialAirHiProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiSetStatus(GObj* fighter_gobj);
void ftFoxSpecialHiInitStatusVars(ftStruct* fp);
void ftFoxSpecialHiDecideSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiFromGroundSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiEndProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialHiEndProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialAirHiEndProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiEndSwitchStatusGround(GObj* fighter_gobj);
void ftFoxSpecialHiEndSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiEndSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiBoundProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialAirHiBoundProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialAirHiBoundProcMap(GObj* fighter_gobj);
void ftFoxSpecialAirHiBoundSetStatus(GObj* fighter_gobj);
void ftFoxSpecialHiStartInitGravity(ftStruct* fp);
void ftFoxSpecialHiStartSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirHiStartSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftFoxSpecialLwCheckSetRelease(ftStruct* fp);
void ftFoxSpecialLwUpdateEffect(ftStruct* fp);
void ftFoxSpecialLwDecReleaseLag(ftStruct* fp);
void ftFoxSpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialAirLwCommonProcPhysics(GObj* fighter_gobj);
void ftFoxSpecialLwLoopProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialLwLoopProcInterrupt(GObj* fighter_gobj);
void ftFoxSpecialLwLoopSetReflectFlag(GObj* fighter_gobj);
void ftFoxSpecialLwLoopSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirLwLoopSetStatus(GObj* fighter_gobj);
void ftFoxSpecialLwHitDecideSetStatus(GObj* fighter_gobj);
void ftFoxSpecialLwHitProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialLwHitSetStatus(GObj* fighter_gobj);
void ftFoxSpecialLwTurnDecTurnFrames(GObj* fighter_gobj);
void ftFoxSpecialLwTurnProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialLwTurnInitStatusVars(GObj* fighter_gobj);
void ftFoxSpecialLwTurnSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirLwTurnSetStatus(GObj* fighter_gobj);
sb32 ftFoxSpecialLwTurnCheckInterruptSpecialLwLoop(GObj* fighter_gobj);
void ftFoxSpecialLwEndProcUpdate(GObj* fighter_gobj);
void ftFoxSpecialLwEndSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirLwEndSetStatus(GObj* fighter_gobj);
void ftFoxSpecialLwStartInitStatusVars(GObj* fighter_gobj);
void ftFoxSpecialLwStartSetStatus(GObj* fighter_gobj);
void ftFoxSpecialAirLwStartSetStatus(GObj* fighter_gobj);

#endif
