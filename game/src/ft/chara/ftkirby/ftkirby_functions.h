#ifndef _FTKIRBY_FUNCTIONS_H_
#define _FTKIRBY_FUNCTIONS_H_

#include <ft/ftdef.h>
#include <ssb_types.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftKirby_SpecialHi_UpdateGFX(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_ProcUpdate(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcPhysics(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcMap(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_ProcMap(GObj *fighter_gobj);
void ftKirby_SpecialHi_ProcStatus(GObj *fighter_gobj);
void ftKirby_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialHiLanding_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialAirHi_SetStatus(GObj *fighter_gobj);
void ftKirby_SpecialAirHiFall_SetStatus(GObj *fighter_gobj);

// CopyMarioSpecialN
void ftKirby_CopyMario_SpecialN_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcAccessory(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialN_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyMario_SpecialAirN_SetStatus(GObj *fighter_gobj);

// CopyFoxSpecialN
void ftKirby_CopyFox_SpecialN_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyFox_SpecialN_ProcInterrupt(GObj *fighter_gobj);
void ftKirby_CopyFox_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyFox_SpecialN_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyFox_SpecialAirN_SetStatus(GObj *fighter_gobj);

// CopySamusSpecialN
void ftKirby_CopySamus_SpecialN_DestroyChargeShot(ftStruct *fp);
void ftKirby_CopySamus_SpecialN_ProcDamage(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialN_GetChargeShotPosition(ftStruct *fp, Vec3f *pos);
void ftKirby_CopySamus_SpecialN_SetChargeShotPosition(ftStruct *fp);
void ftKirby_CopySamus_SpecialNStart_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_ProcInterrupt(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_ProcMap(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_ProcMap(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_ProcMap(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNLoop_SetStatus(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_ProcMap(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_ProcMap(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialNEnd_SetStatus(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNEnd_SetStatus(GObj *fighter_gobj);
f32 ftKirby_CopySamus_SpecialNStart_GetAnimPlaybackRate(ftStruct *fp);
void ftKirby_CopySamus_SpecialN_InitStatusVars(ftStruct *fp);
void ftKirby_CopySamus_SpecialNStart_SetStatus(GObj *fighter_gobj);
void ftKirby_CopySamus_SpecialAirNStart_SetStatus(GObj *fighter_gobj);

// CopyDonkeySpecialN
void ftKirby_CopyDonkey_SpecialN_ProcDamage(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNLoop_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNLoop_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialN_GetStatusChargeLevelReset(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNEnd_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNEnd_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialNStart_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyDonkey_SpecialAirNStart_SetStatus(GObj *fighter_gobj);

// CopyPikachuSpecialN
void ftKirby_CopyPikachu_SpecialN_ProcAccessory(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialN_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyPikachu_SpecialAirN_SetStatus(GObj *fighter_gobj);

// CopyNessSpecialN
void ftKirby_CopyNess_SpecialN_ProcAccessory(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialN_InitStatusVars(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialN_SetStatus(GObj *fighter_gobj);
void ftKirby_CopyNess_SpecialAirN_SetStatus(GObj *fighter_gobj);

#endif