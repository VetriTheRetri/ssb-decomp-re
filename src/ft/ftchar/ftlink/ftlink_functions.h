#ifndef _FTLINK_FUNCTIONS_H_
#define _FTLINK_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftLinkSpecialHiDestroyWeapon(ftStruct* fp, wpStruct* wp);
void ftLinkSpecialHiUpdateWeaponPos(GObj* fighter_gobj, wpStruct* wp);
void ftLinkSpecialHiDecWeaponLifeCheckDestroy(GObj* fighter_gobj, wpStruct* wp);
void ftLinkSpecialHiUpdateWeaponHit(GObj* fighter_gobj, wpStruct* wp);
void ftLinkSpecialHiProcGFX(GObj* fighter_gobj);
void ftLinkSpecialHiUpdateWeaponVars(GObj* fighter_gobj);
void ftLinkSpecialHiMakeWeapon(GObj* fighter_gobj, sb32 is_skip_gobj);
void ftLinkSpecialHiProcDamage(GObj* fighter_gobj);
void ftLinkSpecialHiProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialHiEndProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialAirHiProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialHiProcPhysics(GObj* fighter_gobj);
void ftLinkSpecialAirHiProcPhysics(GObj* fighter_gobj);
void ftLinkSpecialHiProcMap(GObj* fighter_gobj);
void ftLinkSpecialHiEndProcMap(GObj* fighter_gobj);
void ftLinkSpecialAirHiProcMap(GObj* fighter_gobj);
void ftLinkSpecialHiProcStatus(GObj* fighter_gobj);
void ftLinkSpecialHiSetStatus(GObj* fighter_gobj);
void ftLinkSpecialHiEndSetStatus(GObj* fighter_gobj);
void ftLinkSpecialAirHiSetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftLinkSpecialNDestroyBoomerang(GObj* fighter_gobj);
void ftLinkSpecialNCreateBoomerang(GObj* fighter_gobj);
void ftLinkSpecialNProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialAirNProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialNProcMap(GObj* fighter_gobj);
void ftLinkSpecialNEmptyProcMap(GObj* fighter_gobj);
void ftLinkSpecialAirNProcMap(GObj* fighter_gobj);
void ftLinkSpecialAirNEmptyProcMap(GObj* fighter_gobj);
void ftLinkSpecialNProcStatus(GObj* fighter_gobj);
void ftLinkSpecialNSwitchStatusAir(GObj* fighter_gobj);
void ftLinkSpecialAirNSwitchStatusGround(GObj* fighter_gobj);
void ftLinkSpecialNEmptySwitchStatusAir(GObj* fighter_gobj);
void ftLinkSpecialAirNEmptySwitchStatusGround(GObj* fighter_gobj);
void ftLinkSpecialNSetStatus(GObj* fighter_gobj);
void ftLinkSpecialAirNSetStatus(GObj* fighter_gobj);
void ftLinkSpecialNReturnSetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftLinkSpecialLwCreateBomb(GObj* fighter_gobj);
void ftLinkSpecialLwProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialAirLwProcUpdate(GObj* fighter_gobj);
void ftLinkSpecialLwProcMap(GObj* fighter_gobj);
void ftLinkSpecialAirLwProcMap(GObj* fighter_gobj);
sb32 ftLinkSpecialLwCheckGotoItemThrow(GObj* fighter_gobj, sb32 is_ground);
void ftLinkSpecialLwSetStatus(GObj* fighter_gobj);
void ftLinkSpecialAirLwSetStatus(GObj* fighter_gobj);

#endif
