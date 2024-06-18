#ifndef _FTPIKACHU_FUNCTIONS_H_
#define _FTPIKACHU_FUNCTIONS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <mp/mpdef.h>

// SpecialN / SpecialAirN
void ftPikachuSpecialNProcAccessory(GObj* fighter_gobj);
void ftPikachuSpecialNProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirNProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialNInitStatusVars(GObj* fighter_gobj);
void ftPikachuSpecialNSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirNSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftPikachuSpecialLwCreateThunder(GObj* fighter_gobj);
void ftPikachuSpecialLwStartUpdateThunder(GObj* fighter_gobj);
void ftPikachuSpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirLwStartProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialLwStartProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwStartProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwStartSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialLwStartSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialLwStartInitStatusVars(GObj* fighter_gobj);
void ftPikachuSpecialLwStartSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirLwStartSetStatus(GObj* fighter_gobj);
sb32 ftPikachuSpecialLwCheckCollideThunder(GObj* fighter_gobj);
void ftPikachuSpecialLwLoopProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirLwLoopProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialLwLoopProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwLoopProcMap(GObj* fighter_gobj);
void ftPikachuSpecialLwProcDamage(GObj* fighter_gobj);
void ftPikachuSpecialAirLwLoopSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialLwLoopSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialLwLoopUpdateThunder(GObj* fighter_gobj);
void ftPikachuSpecialLwLoopSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirLwLoopSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialLwHitProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirLwHitProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirLwHitProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialLwHitProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwHitProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwHitSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialLwHitSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialLwHitInitStatusVars(GObj* fighter_gobj);
void ftPikachuSpecialLwHitSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirLwHitSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirLwEndProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialLwEndProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwEndProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirLwEndSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialLwEndSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialLwClearProcDamage(GObj* fighter_gobj);
void ftPikachuSpecialLwEndSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirLwEndSetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftPikachuSpecialHiStartProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirHiStartProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirHiStartProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialHiStartProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirHiStartProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirHiStartSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialHiStartSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialHiStartInitStatusVars(GObj* fighter_gobj);
void ftPikachuSpecialHiInitMiscVars(GObj* fighter_gobj);
void ftPikachuSpecialHiStartSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirHiStartSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialHiProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirHiProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialHiUpdateModelPitchScale(GObj* fighter_gobj);
void ftPikachuSpecialHiProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialHiProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialHiProcMap(GObj* fighter_gobj);
sb32 ftPikachuSpecialHiCheckIgnorePass(GObj* fighter_gobj);
void ftPikachuSpecialAirHiProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirHiSwitchStatusGround(GObj* fighter_gobj);
void ftPikachuSpecialHiInitStatusVarsZip(GObj* fighter_gobj);
void ftPikachuSpecialHiSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirHiSetStatus(GObj* fighter_gobj);
sb32 ftPikachuSpecialHiCheckGotoSubZip(GObj* fighter_gobj);
void ftPikachuSpecialHiEndProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialAirHiEndProcUpdate(GObj* fighter_gobj);
void ftPikachuSpecialHiEndProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialAirHiEndProcPhysics(GObj* fighter_gobj);
void ftPikachuSpecialHiEndProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirHiEndProcMap(GObj* fighter_gobj);
void ftPikachuSpecialAirHiEndSwitchStatusGround(GObj* fighter_gobj); // Unused;
void ftPikachuSpecialHiEndSwitchStatusAir(GObj* fighter_gobj);
void ftPikachuSpecialHiEndBackupVel(GObj* fighter_gobj);
void ftPikachuSpecialHiEndSetStatus(GObj* fighter_gobj);
void ftPikachuSpecialAirHiEndSetStatus(GObj* fighter_gobj);

#endif
