#ifndef _FTYOSHI_FUNCTIONS_H_
#define _FTYOSHI_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftYoshi_SpecialHi_ProcDamage(GObj *fighter_gobj);
void ftYoshi_SpecialHi_GetEggPosition(ftStruct *fp, Vec3f *pos);
void ftYoshi_SpecialHi_UpdateEggVectors(ftStruct *fp);
void ftYoshi_SpecialHi_UpdateEggVars(GObj *fighter_gobj);
void ftYoshi_SpecialHi_UpdateEggThrowForce(GObj *fighter_gobj);
void ftYoshi_SpecialHi_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialAirHi_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialHi_ProcPhysics(GObj *fighter_gobj);
void ftYoshi_SpecialAirHi_ProcPhysics(GObj *fighter_gobj);
void ftYoshi_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj);
void ftYoshi_SpecialHi_SwitchStatusAir(GObj *fighter_gobj);
void ftYoshi_SpecialHi_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialAirHi_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialHi_InitStatusVars(GObj *fighter_gobj);
void ftYoshi_SpecialHi_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirHi_SetStatus(GObj *fighter_gobj);

// SpecialN / SpecialAirN
void ftYoshi_SpecialN_InitCatchVars(ftStruct *fp, void (*proc_catch)(GObj*));
void ftYoshi_SpecialNCatch_UpdateProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*));
void ftYoshi_SpecialNCatch_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialNCatch_UpdateCaptureVars(ftStruct *fp);
void ftYoshi_SpecialNRelease_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialAirNRelease_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialN_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialAirN_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialNCatch_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialNRelease_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialAirNRelease_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialN_ProcStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirN_ProcStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj);
void ftYoshi_SpecialN_SwitchStatusAir(GObj *fighter_gobj);
void ftYoshi_SpecialAirNCatch_SwitchStatusGround(GObj *fighter_gobj);
void ftYoshi_SpecialNCatch_SwitchStatusAir(GObj *fighter_gobj);
void ftYoshi_SpecialAirNRelease_SwitchStatusGround(GObj *fighter_gobj);
void ftYoshi_SpecialNRelease_SwitchStatusAir(GObj *fighter_gobj);
void ftYoshi_SpecialN_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirN_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialNCatch_InitStatusVars(GObj *fighter_gobj);
void ftYoshi_SpecialNCatch_ProcCatch(GObj *fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcCatch(GObj *fighter_gobj);
void ftYoshi_SpecialNRelease_InitStatusVars(GObj *fighter_gobj);
void ftYoshi_SpecialNRelease_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirNRelease_SetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftYoshi_SpecialLwStart_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialLwLanding_ProcUpdate(GObj *fighter_gobj);
void ftYoshi_SpecialAirLwLoop_ProcPhysics(GObj *fighter_gobj);
void ftYoshi_SpecialLwStart_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialAirLwLoop_ProcMap(GObj *fighter_gobj);
void ftYoshi_SpecialLwStart_ProcStatus(GObj *fighter_gobj);
void ftYoshi_SpecialLwStart_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirLwStart_SetStatus(GObj *fighter_gobj);
void ftYoshi_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj);

#endif