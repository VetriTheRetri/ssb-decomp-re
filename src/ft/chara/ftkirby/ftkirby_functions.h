#ifndef _FTKIRBY_FUNCTIONS_H_
#define _FTKIRBY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftKirbySpecialHiUpdateGFX(GObj* fighter_gobj);
void ftKirbySpecialHiProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_ProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialHiProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_ProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialHiProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcMap(GObj* fighter_gobj);
void ftKirbySpecialHiProcStatus(GObj* fighter_gobj);
void ftKirby_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirHi_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftKirbySpecialLwUnused(GObj* fighter_gobj);
void ftKirbySpecialLwUpdateColAnim(GObj* fighter_gobj);
void ftKirbySpecialLwSetDamageResist(GObj* fighter_gobj);
void ftKirbySpecialLwSetDropFallVel(ftStruct* fp);
f32 ftKirbySpecialLwGetGroundAxisRoll(ftStruct* fp);
sb32 ftKirbySpecialLwCheckRelease(GObj* fighter_gobj, sb32 is_allow_release);
void ftKirbySpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirLwStartProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_DecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirby_SpecialLwUnk_ProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirLwHoldProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialLwHoldDecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirbySpecialLwHoldProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirLwFall_ProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialLwHoldProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialLwStartProcMap(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_ProcMap(GObj* fighter_gobj);
void ftKirbySpecialLwHoldProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirLwStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirLwHoldProcMap(GObj* fighter_gobj);
void ftKirby_SpecialLwStart_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_SetStatus(GObj* fighter_gobj);
void ftKirbySpecialLwEndSetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirLwStart_SetStatus(GObj* fighter_gobj);
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
void ftKirby_SpecialNCopy_InitCopyVars(GObj* fighter_gobj);
void ftKirbySpecialNStopGFX(GObj* fighter_gobj);
void ftKirbySpecialNStartProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirbySpecialAirNStartProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNEat_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_UpdateCheckThrowStar(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_UpdateCheckCopyStar(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_ProcUpdate(GObj* fighter_gobj);
sb32 ftKirbySpecialNLoopCheckContinueLoop(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcInterrupt(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopProcInterrupt(GObj* fighter_gobj);
sb32 ftKirby_SpecialNThrow_CheckGotoThrow(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirby_SpecialNCopy_CheckGotoCopy(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirby_SpecialNTurn_CheckGotoTurn(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirby_SpecialNWait_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcPhysics(GObj* fighter_gobj);
void ftKirbySpecialNStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialNLoopProcMap(GObj* fighter_gobj);
void ftKirbySpecialNEndProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNEat_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNWait_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_ProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNStartProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNEndProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNEat_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_ProcMap(GObj* fighter_gobj);
void ftKirbySpecialAirNStartSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialAirNEndSwitchStatusGround(GObj* fighter_gobj);
void ftKirbySpecialNStartSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNLoopSwitchStatusAir(GObj* fighter_gobj);
void ftKirbySpecialNEndSwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialNEat_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialAirNCatch_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialAirNEat_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNWait_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNWait_UpdateLR(GObj* fighter_gobj);
void ftKirby_SpecialNWait_SetStatusFromTurn(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_SetStatusFromTurn(GObj* fighter_gobj);
void ftKirby_SpecialNEat_SetStatusParam(GObj* fighter_gobj, s32 status_id);
void ftKirby_SpecialNCatchEat_SetStatusParam(GObj* fighter_gobj, s32 status_id);
void ftKirby_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftKirbySpecialNLoopSetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_SpecialNEat_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNWait_SetStatusFromEat(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_SetStatus(GObj* fighter_gobj);
void ftKirbySpecialNEndSetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNStart_SetStatus(GObj* fighter_gobj);
void ftKirbySpecialAirNLoopSetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_SpecialAirNEat_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_SetStatusFromEat(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_SetStatus(GObj* fighter_gobj);
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
void ftKirby_CopyMario_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SetStatus(GObj* fighter_gobj);

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
void ftKirby_CopySamus_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

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
void ftKirby_CopyDonkey_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

// CopyPikachuSpecialN
void ftKirbyCopyPikachuSpecialNProcAccessory(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyPikachuSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyNessSpecialN
void ftKirbyCopyNessSpecialNProcAccessory(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyNessSpecialNInitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyLinkSpecialN
void ftKirbyCopyLinkSpecialNDestroyBoomerang(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNCreateBoomerang(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyLink_SpecialNEmpty_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyLink_SpecialAirNEmpty_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyLinkSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyLink_SpecialNEmpty_SwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyLink_SpecialAirNEmpty_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftKirbyCopyLink_SpecialNReturn_SetStatus(GObj* fighter_gobj);

// CopyPurinSpecialN
void ftKirbyCopyPurinSpecialNInitStatusVars(GObj* fighter_gobj);
f32 ftKirbyCopyPurinSpecialNGetAngle(s32 stick_y);
void ftKirbyCopyPurinSpecialAirNProcPhysics(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyPurinSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialAirN_SetStatus(GObj* fighter_gobj);

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
void ftKirby_CopyCaptain_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyYoshiSpecialN
void ftKirbyCopyYoshiSpecialNInitCatchVars(ftStruct* fp, void (*proc_catch)(GObj*));
void ftKirbyCopyYoshi_SpecialNCatch_UpdateProcStatus(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirbyCopyYoshi_SpecialNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftStruct* fp);
void ftKirbyCopyYoshi_SpecialNRelease_ProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNRelease_ProcUpdate(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNCatch_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNRelease_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNRelease_ProcMap(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNProcStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshiSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNCatch_SwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNCatch_SwitchStatusAir(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNRelease_SwitchStatusGround(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNRelease_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNCatch_InitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNRelease_InitStatusVars(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialNRelease_SetStatus(GObj* fighter_gobj);
void ftKirbyCopyYoshi_SpecialAirNRelease_SetStatus(GObj* fighter_gobj);

#endif
