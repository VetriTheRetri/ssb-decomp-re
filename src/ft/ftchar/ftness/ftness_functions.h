#ifndef _FTNESS_FUNCTIONS_H_
#define _FTNESS_FUNCTIONS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <mp/mpdef.h>

// JumpAerial
void ftNessJumpAerialProcPhysics(GObj* fighter_gobj); // Same story as Yoshi's JumpAerial physics

// Appear
void ftNessAppearStartProcUpdate(GObj* fighter_gobj);
void ftNessAppearWaitProcUpdate(GObj* fighter_gobj);
void ftNessAppearWaitSetStatus(GObj* fighter_gobj);
void ftNessAppearEndSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftNessSpecialNProcAccessory(GObj* fighter_gobj);
void ftNessSpecialNProcMap(GObj* fighter_gobj);
void ftNessSpecialAirNProcMap(GObj* fighter_gobj);
void ftNessSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialNInitStatusVars(GObj* fighter_gobj);
void ftNessSpecialNSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirNSetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
void ftNessSpecialHiDecThunderTimers(ftStruct* fp);
void ftNessSpecialHiCreatePKThunder(GObj* fighter_gobj);
sb32 ftNessSpecialHiCheckCollidePKThunder(GObj* fighter_gobj);
void ftNessSpecialHiStartProcUpdate(GObj* fighter_gobj);
void ftNessSpecialAirHiStartProcUpdate(GObj* fighter_gobj);
void ftNessSpecialHiProcPhysics(GObj* fighter_gobj);
void ftNessSpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftNessSpecialHiStartProcMap(GObj* fighter_gobj);
void ftNessSpecialAirHiStartProcMap(GObj* fighter_gobj);
void ftNessSpecialAirHiStartSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialHiStartSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialHiInitStatusVars(GObj* fighter_gobj);
void ftNessSpecialHiStartSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirHiStartSetStatus(GObj* fighter_gobj);
void ftNessSpecialHiUpdatePKThunder(GObj* fighter_gobj);
void ftNessSpecialHiHoldProcUpdate(GObj* fighter_gobj);
void ftNessSpecialAirHiHoldProcUpdate(GObj* fighter_gobj);
void ftNessSpecialHiHoldProcMap(GObj* fighter_gobj);
void ftNessSpecialAirHiHoldProcMap(GObj* fighter_gobj);
void ftNessSpecialHiSetPKThunderDestroy(GObj* fighter_gobj); // Unused
void ftNessSpecialAirHiHoldSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialHiHoldSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialHiHoldInitStatusVars(GObj* fighter_gobj);
void ftNessSpecialHiHoldSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirHiHoldSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirHiEndProcUpdate(GObj* fighter_gobj);
void ftNessSpecialHiEndProcMap(GObj* fighter_gobj);
void ftNessSpecialAirHiEndProcMap(GObj* fighter_gobj);
void ftNessSpecialAirHiEndSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialHiEndSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialHiClearProcDamage(GObj* fighter_gobj);
void ftNessSpecialHiEndSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirHiEndSetStatus(GObj* fighter_gobj);
void ftNessSpecialHiCollideWallPhysics(GObj* fighter_gobj, mpCollData* coll_data);
void ftNessSpecialHiUpdateModelPitch(GObj* fighter_gobj);
void ftNessJibakuProcUpdate(GObj* fighter_gobj);
void ftNessJibakuAirProcUpdate(GObj* fighter_gobj);
void ftNessJibakuProcPhysics(GObj* fighter_gobj);
void ftNessJibakuAirProcPhysics(GObj* fighter_gobj);
sb32 ftNessSpecialHiCheckIgnorePass(GObj* fighter_gobj);
void ftNessJibakuProcMap(GObj* fighter_gobj);
void ftNessJibakuAirProcMap(GObj* fighter_gobj);
void ftNessJibakuAirSwitchStatusGround(GObj* fighter_gobj);
void ftNessJibakuSwitchStatusAir(GObj* fighter_gobj);
void ftNessJibakuInitStatusVars(GObj* fighter_gobj);
void ftNessJibakuSetStatus(GObj* fighter_gobj);
void ftNessJibakuAirSetStatus(GObj* fighter_gobj);
void ftNessJibakuAirBoundProcUpdate(GObj* fighter_gobj);
void ftNessJibakuAirBoundProcMap(GObj* fighter_gobj);
void ftNessJibakuAirBoundSetStatus(GObj* fighter_gobj, Vec3f* angle, Vec3f* pos);

// SpecialLw / SpecialAirLw
void ftNessSpecialLwCheckRelease(ftStruct* fp);
void ftNessSpecialLwDecReleaseLag(ftStruct* fp);
void ftNessSpecialLwProcAbsorb(GObj* fighter_gobj);
void ftNessSpecialLwStartProcUpdate(GObj* fighter_gobj);
void ftNessSpecialAirLwStartProcUpdate(GObj* fighter_gobj);
void ftNessSpecialLwProcPhysics(GObj* fighter_gobj);
void ftNessSpecialAirLwProcPhysics(GObj* fighter_gobj);
void ftNessSpecialLwStartProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwStartProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwStartSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialLwStartSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialLwInitStatusVars(GObj* fighter_gobj);
void ftNessSpeciaLwStartSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirLwStartSetStatus(GObj* fighter_gobj);
void ftNessSpecialLwUpdateReleaseLag(GObj* fighter_gobj);
void ftNessSpecialLwHoldProcUpdate(GObj* fighter_gobj);
void ftNessSpecialAirLwHoldProcUpdate(GObj* fighter_gobj);
void ftNessSpecialLwHoldProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwHoldProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwHoldSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialLwHoldSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialLwInitVars(GObj* fighter_gobj);
void ftNessSpecialLwHoldSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirLwHoldSetStatus(GObj* fighter_gobj);
void ftNessSpecialLwHitProcUpdate(GObj* fighter_gobj);
void ftNessSpecialAirLwHitProcUpdate(GObj* fighter_gobj);
void ftNessSpecialLwHitProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwHitProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwHitSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialLwHitSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialLwHitSetAbsorbTrue(GObj* fighter_gobj);
void ftNessSpecialLwHitSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirLwHitSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirLwEndProcUpdate(GObj* fighter_gobj);
void ftNessSpecialLwEndProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwEndProcMap(GObj* fighter_gobj);
void ftNessSpecialAirLwEndSwitchStatusGround(GObj* fighter_gobj);
void ftNessSpecialLwEndSwitchStatusAir(GObj* fighter_gobj);
void ftNessSpecialLwEndSetStatus(GObj* fighter_gobj);
void ftNessSpecialAirLwEndSetStatus(GObj* fighter_gobj);

#endif
