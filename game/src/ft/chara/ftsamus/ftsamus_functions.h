#ifndef _FTSAMUS_FUNCTIONS_H_
#define _FTSAMUS_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// SpecialN / SpecialAirN
void ftSamusSpecialNDestroyChargeShot(ftStruct *fp);
void ftSamusSpecialNProcDamage(GObj *fighter_gobj);
void ftSamusSpecialNGetChargeShotPosition(ftStruct *fp, Vec3f *pos);
void ftSamusSpecialNSetChargeShotPosition(ftStruct *fp);
void ftSamusSpecialNStartProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialNStartProcInterrupt(GObj *fighter_gobj);
void ftSamusSpecialNStartProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirNStartProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirNStartSwitchStatusGround(GObj *fighter_gobj);
void ftSamusSpecialNStartSwitchStatusAir(GObj *fighter_gobj);
void ftSamusSpecialNLoopProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialNLoopProcInterrupt(GObj *fighter_gobj);
void ftSamusSpecialNLoopProcMap(GObj *fighter_gobj);
void ftSamusSpecialNLoopSetStatus(GObj *fighter_gobj);
void ftSamusSpecialNEndProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialNEndProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirNEndProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirNEndSwitchStatusGround(GObj *fighter_gobj);
void ftSamusSpecialNEndSwitchStatusAir(GObj *fighter_gobj);
void ftSamusSpecialNEndSetStatus(GObj *fighter_gobj);
void ftSamusSpecialAirNEndSetStatus(GObj *fighter_gobj);
f32 ftSamusSpecialNStartGetAnimPlaybackRate(ftStruct *fp);
void ftSamusSpecialNStartInitStatusVars(ftStruct *fp);
void ftSamusSpecialNStartSetStatus(GObj *fighter_gobj);
void ftSamusSpecialAirNStartSetStatus(GObj *fighter_gobj);

// SpecialHi / SpecialAirHi
void ftSamusSpecialHiProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialHiProcPhysics(GObj *fighter_gobj);
sb32 ftSamusSpecialHiCheckIgnorePass(GObj *fighter_gobj);
void ftSamusSpecialHiProcMap(GObj *fighter_gobj);
void ftSamusSpecialHiSetStatus(GObj *fighter_gobj);
void ftSamusSpecialAirHiProcPhysics(GObj *fighter_gobj);
void ftSamusSpecialAirHiSetStatus(GObj *fighter_gobj);

// SpecialLw / SpecialAirLw
void ftSamusSpecialLwCreateBomb(GObj *fighter_gobj);
void ftSamusSpecialLwProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialAirLwProcUpdate(GObj *fighter_gobj);
void ftSamusSpecialLwProcPhysics(GObj *fighter_gobj);
void ftSamusSpecialAirLwProcPhysics(GObj *fighter_gobj);
void ftSamusSpecialLwProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirLwProcMap(GObj *fighter_gobj);
void ftSamusSpecialAirLwSwitchStatusGround(GObj *fighter_gobj);
void ftSamusSpecialLwTransferStatusAir(GObj *fighter_gobj);
void ftSamusSpecialLwSwitchStatusAir(GObj *fighter_gobj);
void ftSamusSpecialLwInitStatusVars(ftStruct *fp);
void ftSamusSpecialLwSetStatus(GObj *fighter_gobj);
void ftSamusSpecialAirLwSetStatus(GObj *fighter_gobj);

#endif