#ifndef _FTNESSFUNCTIONS_H_
#define _FTNESSFUNCTIONS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <mp/mpdef.h>

// JumpAerial
extern void ftNessJumpAerialProcPhysics(GObj* fighter_gobj); // Same story as Yoshi's JumpAerial physics

// Appear
extern void ftNessAppearStartProcUpdate(GObj* fighter_gobj);
extern void ftNessAppearWaitProcUpdate(GObj* fighter_gobj);
extern void ftNessAppearWaitSetStatus(GObj* fighter_gobj);
extern void ftNessAppearEndSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
extern void ftNessSpecialNProcAccessory(GObj* fighter_gobj);
extern void ftNessSpecialNProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirNProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialNSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialNInitStatusVars(GObj* fighter_gobj);
extern void ftNessSpecialNSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirNSetStatus(GObj* fighter_gobj);

// SpecialHi / SpecialAirHi
extern void ftNessSpecialHiDecThunderTimers(ftStruct* fp);
extern void ftNessSpecialHiCreatePKThunder(GObj* fighter_gobj);
extern sb32 ftNessSpecialHiCheckCollidePKThunder(GObj* fighter_gobj);
extern void ftNessSpecialHiStartProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialAirHiStartProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialHiProcPhysics(GObj* fighter_gobj);
extern void ftNessSpecialAirHiProcPhysics(GObj* fighter_gobj);
extern void ftNessSpecialHiStartProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirHiStartProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirHiStartSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialHiStartSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialHiInitStatusVars(GObj* fighter_gobj);
extern void ftNessSpecialHiStartSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirHiStartSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialHiUpdatePKThunder(GObj* fighter_gobj);
extern void ftNessSpecialHiHoldProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialAirHiHoldProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialHiHoldProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirHiHoldProcMap(GObj* fighter_gobj);
extern void ftNessSpecialHiSetPKThunderDestroy(GObj* fighter_gobj); // Unused
extern void ftNessSpecialAirHiHoldSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialHiHoldSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialHiHoldInitStatusVars(GObj* fighter_gobj);
extern void ftNessSpecialHiHoldSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirHiHoldSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirHiEndProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialHiEndProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirHiEndProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirHiEndSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialHiEndSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialHiClearProcDamage(GObj* fighter_gobj);
extern void ftNessSpecialHiEndSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirHiEndSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialHiCollideWallPhysics(GObj* fighter_gobj, mpCollData* coll_data);
extern void ftNessSpecialHiUpdateModelPitch(GObj* fighter_gobj);
extern void ftNessJibakuProcUpdate(GObj* fighter_gobj);
extern void ftNessJibakuAirProcUpdate(GObj* fighter_gobj);
extern void ftNessJibakuProcPhysics(GObj* fighter_gobj);
extern void ftNessJibakuAirProcPhysics(GObj* fighter_gobj);
extern sb32 ftNessSpecialHiProcPass(GObj* fighter_gobj);
extern void ftNessJibakuProcMap(GObj* fighter_gobj);
extern void ftNessJibakuAirProcMap(GObj* fighter_gobj);
extern void ftNessJibakuAirSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessJibakuSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessJibakuInitStatusVars(GObj* fighter_gobj);
extern void ftNessJibakuSetStatus(GObj* fighter_gobj);
extern void ftNessJibakuAirSetStatus(GObj* fighter_gobj);
extern void ftNessJibakuAirBoundProcUpdate(GObj* fighter_gobj);
extern void ftNessJibakuAirBoundProcMap(GObj* fighter_gobj);
extern void ftNessJibakuAirBoundSetStatus(GObj* fighter_gobj, Vec3f* angle, Vec3f* pos);

// SpecialLw / SpecialAirLw
extern void ftNessSpecialLwCheckRelease(ftStruct* fp);
extern void ftNessSpecialLwDecReleaseLag(ftStruct* fp);
extern void ftNessSpecialLwProcAbsorb(GObj* fighter_gobj);
extern void ftNessSpecialLwStartProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialAirLwStartProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialLwProcPhysics(GObj* fighter_gobj);
extern void ftNessSpecialAirLwProcPhysics(GObj* fighter_gobj);
extern void ftNessSpecialLwStartProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwStartProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwStartSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialLwStartSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialLwInitStatusVars(GObj* fighter_gobj);
extern void ftNessSpecialLwStartSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirLwStartSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialLwUpdateReleaseLag(GObj* fighter_gobj);
extern void ftNessSpecialLwHoldProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHoldProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialLwHoldProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHoldProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHoldSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialLwHoldSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialLwInitVars(GObj* fighter_gobj);
extern void ftNessSpecialLwHoldSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHoldSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialLwHitProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHitProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialLwHitProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHitProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHitSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialLwHitSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialLwHitSetAbsorbTrue(GObj* fighter_gobj);
extern void ftNessSpecialLwHitSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirLwHitSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirLwEndProcUpdate(GObj* fighter_gobj);
extern void ftNessSpecialLwEndProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwEndProcMap(GObj* fighter_gobj);
extern void ftNessSpecialAirLwEndSwitchStatusGround(GObj* fighter_gobj);
extern void ftNessSpecialLwEndSwitchStatusAir(GObj* fighter_gobj);
extern void ftNessSpecialLwEndSetStatus(GObj* fighter_gobj);
extern void ftNessSpecialAirLwEndSetStatus(GObj* fighter_gobj);

#endif
