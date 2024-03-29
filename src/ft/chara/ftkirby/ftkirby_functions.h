#ifndef _FTKIRBY_FUNCTIONS_H_
#define _FTKIRBY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftKirby_SpecialHi_UpdateGFX(GObj* fighter_gobj);
void ftKirby_SpecialHi_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialHi_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialAirHi_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialHi_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialHi_ProcStatus(GObj* fighter_gobj);
void ftKirby_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialHiLanding_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirHi_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirHiFall_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftKirby_SpecialLw_Unused(GObj* fighter_gobj);
void ftKirby_SpecialLw_UpdateColAnim(GObj* fighter_gobj);
void ftKirby_SpecialLw_SetDamageResist(GObj* fighter_gobj);
void ftKirby_SpecialLw_SetDropFallVel(ftStruct* fp);
f32 ftKirby_SpecialLw_GetGroundAxisRoll(ftStruct* fp);
sb32 ftKirby_SpecialLw_CheckRelease(GObj* fighter_gobj, sb32 is_allow_release);
void ftKirby_SpecialLwStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirLwStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_DecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirby_SpecialLwUnk_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirLwHold_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialLwHold_DecideNextStatus(GObj* fighter_gobj, sb32 ground_or_air);
void ftKirby_SpecialLwHold_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirLwFall_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialLwHold_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialLwStart_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialLwHold_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirLwStart_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirLwHold_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialLwStart_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialLwUnk_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialLwEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirLwStart_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirLwHold_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirLwEnd_SetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftKirby_SpecialN_ApplyCaptureDamage(GObj* kirby_gobj, GObj* victim_gobj, s32 damage);
f32 ftKirby_SpecialN_GetCaptureDistance(Vec3f* kirby_pos, Vec3f* victim_pos);
void ftKirby_SpecialN_AddCaptureDistance(ftStruct* fp, GObj* fighter_gobj, Vec3f* pos);
void ftKirby_SpecialN_InitStatusVars(GObj* fighter_gobj, sb32 unused);
void ftKirby_SpecialN_InitCatchVars(ftStruct* fp);
void ftKirby_SpecialN_GotoInitCatchVars(GObj* fighter_gobj);
void ftKirby_SpecialN_InitFighterVars(ftStruct* fp);
void ftKirby_SpecialNCopy_InitCopyVars(GObj* fighter_gobj);
void ftKirby_SpecialN_StopGFX(GObj* fighter_gobj);
void ftKirby_SpecialNStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNLoop_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNEat_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_UpdateCheckThrowStar(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_UpdateCheckCopyStar(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_ProcUpdate(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_ProcUpdate(GObj* fighter_gobj);
sb32 ftKirby_SpecialNLoop_CheckContinueLoop(GObj* fighter_gobj);
void ftKirby_SpecialNLoop_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_SpecialAirNLoop_ProcInterrupt(GObj* fighter_gobj);
sb32 ftKirby_SpecialNThrow_CheckGotoThrow(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirby_SpecialNCopy_CheckGotoCopy(GObj* fighter_gobj, void (*proc_status)(GObj*));
sb32 ftKirby_SpecialNTurn_CheckGotoTurn(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirby_SpecialNWait_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcPhysics(GObj* fighter_gobj);
void ftKirby_SpecialNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNLoop_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNEnd_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNEat_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNWait_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNLoop_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNEnd_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNEat_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_ProcMap(GObj* fighter_gobj);
void ftKirby_SpecialAirNStart_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialAirNLoop_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialAirNEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_SpecialNStart_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialNLoop_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_SpecialNEnd_SwitchStatusAir(GObj* fighter_gobj);
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
void ftKirby_SpecialNLoop_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_SpecialNEat_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNThrow_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNWait_SetStatusFromEat(GObj* fighter_gobj);
void ftKirby_SpecialNTurn_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNCopy_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialNEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNStart_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNLoop_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_SpecialAirNEat_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNThrow_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNWait_SetStatusFromEat(GObj* fighter_gobj);
void ftKirby_SpecialAirNTurn_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNCopy_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialAirNEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_SpecialN_LoseCopy(GObj* fighter_gobj);
void ftKirby_SpecialN_DamageCheckLoseCopy(GObj* fighter_gobj);

// CopyMarioSpecialN
void ftKirby_CopyMario_SpecialN_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcAccessory(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyFoxSpecialN
void ftKirby_CopyFox_SpecialN_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyFox_SpecialN_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_CopyFox_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyFox_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyFox_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopySamusSpecialN
void ftKirby_CopySamus_SpecialN_DestroyChargeShot(ftStruct* fp);
void ftKirby_CopySamus_SpecialN_ProcDamage(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialN_GetChargeShotPosition(ftStruct* fp, Vec3f* pos);
void ftKirby_CopySamus_SpecialN_SetChargeShotPosition(ftStruct* fp);
void ftKirby_CopySamus_SpecialNStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcMap(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_SetStatus(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_ProcMap(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_ProcMap(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_SetStatus(GObj* fighter_gobj);
f32 ftKirby_CopySamus_SpecialNStart_GetAnimPlaybackRate(ftStruct* fp);
void ftKirby_CopySamus_SpecialN_InitStatusVars(ftStruct* fp);
void ftKirby_CopySamus_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

// CopyDonkeySpecialN
void ftKirby_CopyDonkey_SpecialN_ProcDamage(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialN_GetStatusChargeLevelReset(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_SetStatus(GObj* fighter_gobj);

// CopyPikachuSpecialN
void ftKirby_CopyPikachu_SpecialN_ProcAccessory(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyNessSpecialN
void ftKirby_CopyNess_SpecialN_ProcAccessory(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialN_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyLinkSpecialN
void ftKirby_CopyLink_SpecialN_DestroyBoomerang(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_CreateBoomerang(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirN_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialNEmpty_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirNEmpty_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_ProcStatus(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialNEmpty_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirNEmpty_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyLink_SpecialNReturn_SetStatus(GObj* fighter_gobj);

// CopyPurinSpecialN
void ftKirby_CopyPurin_SpecialN_InitStatusVars(GObj* fighter_gobj);
f32 ftKirby_CopyPurin_SpecialN_GetAngle(s32 stick_y);
void ftKirby_CopyPurin_SpecialAirN_ProcPhysics(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyPurin_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyCaptainSpecialN
void ftKirby_CopyCaptain_SpecialN_UpdateGFX(GObj* fighter_gobj);
f32 ftKirby_CopyCaptain_SpecialN_GetAngle(s32 stick_y);
void ftKirby_CopyCaptain_SpecialN_ProcPhysics(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialAirN_ProcPhysics(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialN_InitStatusVars(GObj* fighter_gobj);
void func_ovl3_80160B28(); // Unused
void ftKirby_CopyCaptain_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyCaptain_SpecialAirN_SetStatus(GObj* fighter_gobj);

// CopyYoshiSpecialN
void ftKirby_CopyYoshi_SpecialN_InitCatchVars(ftStruct* fp, void (*proc_catch)(GObj*));
void ftKirby_CopyYoshi_SpecialNCatch_UpdateProcStatus(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftKirby_CopyYoshi_SpecialNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftStruct* fp);
void ftKirby_CopyYoshi_SpecialNRelease_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNRelease_ProcUpdate(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNRelease_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNRelease_ProcMap(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialN_ProcStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirN_ProcStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNCatch_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNCatch_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNRelease_SwitchStatusGround(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNRelease_SwitchStatusAir(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNCatch_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcCatch(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNRelease_InitStatusVars(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialNRelease_SetStatus(GObj* fighter_gobj);
void ftKirby_CopyYoshi_SpecialAirNRelease_SetStatus(GObj* fighter_gobj);

#endif