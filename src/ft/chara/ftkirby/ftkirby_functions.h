#ifndef _FTKIRBY_FUNCTIONS_H_
#define _FTKIRBY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftKirbySpecialHiUpdateGFX(GObj* fighter_gobj);
void ftKirbySpecialHiProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialHiLandingProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialHiProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialHiLandingProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialAirHiFallProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialHiProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirHiFallProcMap(GObj* fighter_gobj);
void ftKirbySpecialHiProcStatus(GObj* fighter_gobj);
void ftKirbySpecialHiSetStatus(GObj* fighter_gobj);
void ftKirbySpecialHiLandingSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirHiSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirHiFallSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftKirbySpecialLwUnused(GObj* fighter_gobj);
void ftKirbySpecialLwUpdateColAnim(GObj* fighter_gobj);
void ftKirbySpecialLwSetDamageResist(GObj* fighter_gobj);
void ftKirbySpecialLwSetDropFallVel(ftStruct* fp);
f32 ftKirbySpecialLwGetGroundAxisRoll(ftStruct* fp);
sb32 ftKirbySpecialLwCheckRelease(GObj* fighter_gobj, sb32 is_allow_release);
void ftKirbySpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirLwStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialLwUnkDecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirbySpecialLwUnkProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirLwHoldProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialLwHoldDecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirbySpecialLwHoldProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirLwFallProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialLwHoldProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialLwStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialLwUnkProcMap(GObj* fighter_gobj);
void ftKirbySpecialLwHoldProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirLwStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirLwHoldProcMap(GObj* fighter_gobj);
void ftKirbySpecialLwStartSetStatus(GObj* fighter_gobj);
void ftKirbySpecialLwUnkSetStatus(GObj* fighter_gobj);
void ftKirbySpecialLwEndSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirLwStartSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirLwHoldSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirLwEndSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftKirbySpecialNApplyCaptureDamage(GObj* kirby_gobj, GObj* victim_gobj, s32 damage);
f32 ftKirbySpecialNGetCaptureDistance(Vec3f* kirby_pos, Vec3f* victim_pos);
void ftKirbySpecialNAddCaptureDistance(ftStruct* fp, GObj* fighter_gobj, Vec3f* pos);
void ftKirbySpecialNInitStatusVars(GObj* fighter_gobj, sb32 unused);
void ftKirbySpecialNInitCatchVars(ftStruct* fp);
void ftKirbySpecialNGotoInitCatchVars(GObj* fighter_gobj);
void ftKirbySpecialNInitFighterVars(ftStruct* fp);
void ftKirbySpecialNCopyInitCopyVars(GObj* fighter_gobj);
void ftKirbySpecialNStopGFX(GObj* fighter_gobj);
void ftKirbySpecialNStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNCatchProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirNStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNTurnProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirNTurnProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNEatProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNThrowUpdateCheckThrowStar(GObj* fighter_gobj);
void ftKirbySpecialNCopyUpdateCheckCopyStar(GObj* fighter_gobj);
void ftKirbySpecialNThrowProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirNThrowProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNCopyProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirNCopyProcUpdate(GObj* fighter_gobj);
sb32 ftKirbySpecialNLoopCheckContinueLoop(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcInterrupt(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopProcInterrupt(GObj* fighter_gobj);
sb32 ftKirbySpecialNThrowCheckGotoThrow(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirbySpecialNCopyCheckGotoCopy(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirbySpecialNTurnCheckGotoTurn(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirbySpecialNWaitProcInterrupt(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitProcInterrupt(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialNStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcMap(GObj* fighter_gobj);
void ftKirbySpecialNEndProcMap(GObj* fighter_gobj);
void ftKirbySpecialNCatchProcMap(GObj* fighter_gobj);
void ftKirbySpecialNEatProcMap(GObj* fighter_gobj);
void ftKirbySpecialNThrowProcMap(GObj* fighter_gobj);
void ftKirbySpecialNWaitProcMap(GObj* fighter_gobj);
void ftKirbySpecialNTurnProcMap(GObj* fighter_gobj);
void ftKirbySpecialNCopyProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNEndProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNCatchProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNEatProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNThrowProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNTurnProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNCopyProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNStartSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialAirNEndSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNStartSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNLoopSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNEndSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNEatSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNCatchSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialAirNCatchSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialAirNEatSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNThrowSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialAirNThrowSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNWaitSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNTurnSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialAirNTurnSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNCopySwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialAirNCopySwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNWaitUpdateLR(GObj* fighter_gobj);
void ftKirbySpecialNWaitSetStatusFromTurn(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitSetStatusFromTurn(GObj* fighter_gobj);
void ftKirbySpecialNEatSetStatusParam(GObj* fighter_gobj, s32 status_id);
void ftKirbySpecialNCatchEatSetStatusParam(GObj* fighter_gobj, s32 status_id);
void ftKirbySpecialNStartSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNLoopSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNCatchProcCatch(GObj* fighter_gobj);
void ftKirbySpecialNEatSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNThrowSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNWaitSetStatusFromEat(GObj* fighter_gobj);
void ftKirbySpecialNTurnSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNCopySetStatus(GObj* fighter_gobj);
void ftKirbySpecialNEndSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNStartSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNCatchProcCatch(GObj* fighter_gobj);
void ftKirbySpecialAirNEatSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNThrowSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNWaitSetStatusFromEat(GObj* fighter_gobj);
void ftKirbySpecialAirNTurnSetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNCopySetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNEndSetStatus(GObj* fighter_gobj);
void ftKirbySpecialNLoseCopy(GObj* fighter_gobj);
void ftKirbySpecialNDamageCheckLoseCopy(GObj* fighter_gobj);

// CopyMarioSpecialN
void ftKirbyCopyMarioSpecialNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialNProcAccessory(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyMarioSpecialAirNSetStatus(GObj* fighter_gobj);

// CopyFoxSpecialN
void ftKirbyCopyFoxSpecialNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyFoxSpecialNProcInterrupt(GObj* fighter_gobj);
void ftKirbyCopyFoxSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyFoxSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyFoxSpecialAirNSetStatus(GObj* fighter_gobj);

// CopySamusSpecialN
void ftKirbyCopySamusSpecialNDestroyChargeShot(ftStruct* fp);
void ftKirbyCopySamusSpecialNProcDamage(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNGetChargeShotPosition(ftStruct* fp, Vec3f* pos);
void ftKirbyCopySamusSpecialNSetChargeShotPosition(ftStruct* fp);
void ftKirbyCopySamusSpecialNStartProcUpdate(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNStartProcInterrupt(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNStartProcMap(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNStartProcMap(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNStartSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNStartSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNLoopProcUpdate(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNLoopProcInterrupt(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNLoopProcMap(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNLoopSetStatus(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNEndProcUpdate(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNEndProcMap(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNEndProcMap(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNEndSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNEndSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialNEndSetStatus(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNEndSetStatus(GObj* fighter_gobj);
f32 ftKirbyCopySamusSpecialNStartGetAnimPlaybackRate(ftStruct* fp);
void ftKirbyCopySamusSpecialNInitStatusVars(ftStruct* fp);
void ftKirbyCopySamusSpecialNStartSetStatus(GObj* fighter_gobj);
void ftKirbyCopySamusSpecialAirNStartSetStatus(GObj* fighter_gobj);

// CopyDonkeySpecialN
void ftKirbyCopyDonkeySpecialNProcDamage(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNStartProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNStartProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNStartProcInterrupt(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNStartProcMap(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNStartProcMap(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNStartSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNStartSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopProcInterrupt(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopProcMap(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNLoopProcMap(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNLoopSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNLoopSetStatus(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNLoopSetStatus(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNEndProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNEndProcMap(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNEndSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNGetStatusChargeLevelReset(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNEndSetStatus(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNEndSetStatus(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialNStartSetStatus(GObj* fighter_gobj);
void ftKirbyCopyDonkeySpecialAirNStartSetStatus(GObj* fighter_gobj);

// CopyPikachuSpecialN
void ftKirbyCopyPikachuSpecialNProcAccessory(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialAirNSetStatus(GObj* fighter_gobj);

// CopyNessSpecialN
void ftKirbyCopyNessSpecialNProcAccessory(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialAirNSetStatus(GObj* fighter_gobj);

// CopyLinkSpecialN
void ftKirbyCopyLinkSpecialNDestroyBoomerang(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNCreateBoomerang(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNEmptyProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNEmptyProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNEmptySwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNEmptySwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNReturnSetStatus(GObj* fighter_gobj);

// CopyPurinSpecialN
void ftKirbyCopyPurinSpecialNInitStatusVars(GObj* fighter_gobj);
f32 ftKirbyCopyPurinSpecialNGetAngle(s32 stick_y);
void ftKirbyCopyPurinSpecialAirNProcPhysics(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialAirNSetStatus(GObj* fighter_gobj);

// CopyCaptainSpecialN
void ftKirbyCopyCaptainSpecialNUpdateGFX(GObj* fighter_gobj);
f32 ftKirbyCopyCaptainSpecialNGetAngle(s32 stick_y);
void ftKirbyCopyCaptainSpecialNProcPhysics(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialAirNProcPhysics(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialNInitStatusVars(GObj* fighter_gobj);
void func_ovl3_80160B28(); // Unused
void ftKirbyCopyCaptainSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyCaptainSpecialAirNSetStatus(GObj* fighter_gobj);

// CopyYoshiSpecialN
void ftKirbyCopyYoshiSpecialNInitCatchVars(ftStruct* fp, void (*proc_catch)(GObj*));
void ftKirbyCopyYoshiSpecialNCatchUpdateProcStatus(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirbyCopyYoshiSpecialNCatchProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNCatchProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNCatchUpdateCaptureVars(ftStruct* fp);
void ftKirbyCopyYoshiSpecialNReleaseProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNReleaseProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNCatchProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNCatchProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNReleaseProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNReleaseProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNCatchSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNCatchSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNReleaseSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNReleaseSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNSetStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNCatchInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNCatchProcCatch(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNCatchProcCatch(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNReleaseInitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNReleaseSetStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNReleaseSetStatus(GObj* fighter_gobj);

#endif
