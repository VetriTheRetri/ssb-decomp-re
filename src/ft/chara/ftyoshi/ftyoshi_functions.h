#ifndef _FTYOSHI_FUNCTIONS_H_
#define _FTYOSHI_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// JumpAerial
void ftYoshi_JumpAerial_ProcPhysics(GObj* fighter_gobj); // Contemplating whether this should be here or in
														 // ftcommon_functions.h

// SpecialHi / SpecialAirHi
void ftYoshiSpecialHiProcDamage(GObj* fighter_gobj);
void ftYoshiSpecialHiGetEggPosition(ftStruct* fp, Vec3f* pos);
void ftYoshiSpecialHiUpdateEggVectors(ftStruct* fp);
void ftYoshiSpecialHiUpdateEggVars(GObj* fighter_gobj);
void ftYoshiSpecialHiUpdateEggThrowForce(GObj* fighter_gobj);
void ftYoshiSpecialHiProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialAirHiProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialHiProcPhysics(GObj* fighter_gobj);
void ftYoshiSpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftYoshiSpecialAirHiSwitchStatusGround(GObj* fighter_gobj);
void ftYoshiSpecialHiSwitchStatusAir(GObj* fighter_gobj);
void ftYoshiSpecialHiProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirHiProcMap(GObj* fighter_gobj);
void ftYoshiSpecialHiInitStatusVars(GObj* fighter_gobj);
void ftYoshi_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftYoshi_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftYoshiSpecialNInitCatchVars(ftStruct* fp, void (*proc_catch)(GObj*));
void ftYoshi_SpecialNCatch_UpdateProcStatus(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftYoshi_SpecialNCatch_ProcUpdate(GObj* fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcUpdate(GObj* fighter_gobj);
void ftYoshi_SpecialNCatch_UpdateCaptureVars(ftStruct* fp);
void ftYoshi_SpecialNRelease_ProcUpdate(GObj* fighter_gobj);
void ftYoshi_SpecialAirNRelease_ProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialNProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirNProcMap(GObj* fighter_gobj);
void ftYoshi_SpecialNCatch_ProcMap(GObj* fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcMap(GObj* fighter_gobj);
void ftYoshi_SpecialNRelease_ProcMap(GObj* fighter_gobj);
void ftYoshi_SpecialAirNRelease_ProcMap(GObj* fighter_gobj);
void ftYoshiSpecialNProcStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNProcStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftYoshiSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftYoshi_SpecialAirNCatch_SwitchStatusGround(GObj* fighter_gobj);
void ftYoshi_SpecialNCatch_SwitchStatusAir(GObj* fighter_gobj);
void ftYoshi_SpecialAirNRelease_SwitchStatusGround(GObj* fighter_gobj);
void ftYoshi_SpecialNRelease_SwitchStatusAir(GObj* fighter_gobj);
void ftYoshi_SpecialN_SetStatus(GObj* fighter_gobj);
void ftYoshi_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftYoshi_SpecialNCatch_InitStatusVars(GObj* fighter_gobj);
void ftYoshi_SpecialNCatch_ProcCatch(GObj* fighter_gobj);
void ftYoshi_SpecialAirNCatch_ProcCatch(GObj* fighter_gobj);
void ftYoshi_SpecialNRelease_InitStatusVars(GObj* fighter_gobj);
void ftYoshi_SpecialNRelease_SetStatus(GObj* fighter_gobj);
void ftYoshi_SpecialAirNRelease_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftYoshiSpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialLwLandingProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopProcPhysics(GObj* fighter_gobj);
void ftYoshiSpecialLwStartProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopProcMap(GObj* fighter_gobj);
void ftYoshiSpecialLwStartProcStatus(GObj* fighter_gobj);
void ftYoshi_SpecialLwStart_SetStatus(GObj* fighter_gobj);
void ftYoshi_SpecialAirLwStart_SetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopSetStatus(GObj* fighter_gobj);

#endif
