#ifndef _FTYOSHI_FUNCTIONS_H_
#define _FTYOSHI_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// JumpAerial
void ftYoshiJumpAerialProcPhysics(GObj* fighter_gobj); // Contemplating whether this should be here or in
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
void ftYoshiSpecialHiSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirHiSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftYoshiSpecialNInitCatchVars(ftStruct* fp, void (*proc_catch)(GObj*));
void ftYoshiSpecialNCatchUpdateProcStatus(GObj* fighter_gobj, void (*proc_status)(GObj*));
void ftYoshiSpecialNCatchProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialAirNCatchProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialNCatchUpdateCaptureVars(ftStruct* fp);
void ftYoshiSpecialNReleaseProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialAirNReleaseProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialNProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirNProcMap(GObj* fighter_gobj);
void ftYoshiSpecialNCatchProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirNCatchProcMap(GObj* fighter_gobj);
void ftYoshiSpecialNReleaseProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirNReleaseProcMap(GObj* fighter_gobj);
void ftYoshiSpecialNProcStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNProcStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftYoshiSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftYoshiSpecialAirNCatchSwitchStatusGround(GObj* fighter_gobj);
void ftYoshiSpecialNCatchSwitchStatusAir(GObj* fighter_gobj);
void ftYoshiSpecialAirNReleaseSwitchStatusGround(GObj* fighter_gobj);
void ftYoshiSpecialNReleaseSwitchStatusAir(GObj* fighter_gobj);
void ftYoshiSpecialNSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialNCatchInitStatusVars(GObj* fighter_gobj);
void ftYoshiSpecialNCatchProcCatch(GObj* fighter_gobj);
void ftYoshiSpecialAirNCatchProcCatch(GObj* fighter_gobj);
void ftYoshiSpecialNReleaseInitStatusVars(GObj* fighter_gobj);
void ftYoshiSpecialNReleaseSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirNReleaseSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftYoshiSpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialLwLandingProcUpdate(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopProcPhysics(GObj* fighter_gobj);
void ftYoshiSpecialLwStartProcMap(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopProcMap(GObj* fighter_gobj);
void ftYoshiSpecialLwStartProcStatus(GObj* fighter_gobj);
void ftYoshiSpecialLwStartSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirLwStartSetStatus(GObj* fighter_gobj);
void ftYoshiSpecialAirLwLoopSetStatus(GObj* fighter_gobj);

#endif
