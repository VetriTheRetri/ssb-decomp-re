#ifndef _FTLINK_FUNCTIONS_H_
#define _FTLINK_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>
#include <sys/objdef.h>

// SpecialHi / SpecialAirHi
void ftLink_SpecialHi_DestroyWeapon(ftStruct* fp, wpStruct* wp);
void ftLink_SpecialHi_UpdateWeaponPos(GObj* fighter_gobj, wpStruct* wp);
void ftLink_SpecialHi_DecWeaponLifeCheckDestroy(GObj* fighter_gobj, wpStruct* wp);
void ftLink_SpecialHi_UpdateWeaponHit(GObj* fighter_gobj, wpStruct* wp);
void ftLink_SpecialHi_ProcGFX(GObj* fighter_gobj);
void ftLink_SpecialHi_UpdateWeaponVars(GObj* fighter_gobj);
void ftLink_SpecialHi_MakeWeapon(GObj* fighter_gobj, sb32 is_skip_gobj);
void ftLink_SpecialHi_ProcDamage(GObj* fighter_gobj);
void ftLink_SpecialHi_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialHiEnd_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialAirHi_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialHi_ProcPhysics(GObj* fighter_gobj);
void ftLink_SpecialAirHi_ProcPhysics(GObj* fighter_gobj);
void ftLink_SpecialHi_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialHiEnd_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialAirHi_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialHi_ProcStatus(GObj* fighter_gobj);
void ftLink_SpecialHi_SetStatus(GObj* fighter_gobj);
void ftLink_SpecialHiEnd_SetStatus(GObj* fighter_gobj);
void ftLink_SpecialAirHi_SetStatus(GObj* fighter_gobj);

// SpecialN / SpecialAirN
void ftLink_SpecialN_DestroyBoomerang(GObj* fighter_gobj);
void ftLink_SpecialN_CreateBoomerang(GObj* fighter_gobj);
void ftLink_SpecialN_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialAirN_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialN_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialNEmpty_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialAirN_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialAirNEmpty_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialN_ProcStatus(GObj* fighter_gobj);
void ftLink_SpecialN_SwitchStatusAir(GObj* fighter_gobj);
void ftLink_SpecialAirN_SwitchStatusGround(GObj* fighter_gobj);
void ftLink_SpecialNEmpty_SwitchStatusAir(GObj* fighter_gobj);
void ftLink_SpecialAirNEmpty_SwitchStatusGround(GObj* fighter_gobj);
void ftLink_SpecialN_SetStatus(GObj* fighter_gobj);
void ftLink_SpecialAirN_SetStatus(GObj* fighter_gobj);
void ftLink_SpecialNReturn_SetStatus(GObj* fighter_gobj);

// SpecialLw / SpecialAirLw
void ftLink_SpecialLw_CreateBomb(GObj* fighter_gobj);
void ftLink_SpecialLw_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialAirLw_ProcUpdate(GObj* fighter_gobj);
void ftLink_SpecialLw_ProcMap(GObj* fighter_gobj);
void ftLink_SpecialAirLw_ProcMap(GObj* fighter_gobj);
sb32 ftLink_SpecialLw_CheckGotoItemThrow(GObj* fighter_gobj, sb32 is_ground);
void ftLink_SpecialLw_SetStatus(GObj* fighter_gobj);
void ftLink_SpecialAirLw_SetStatus(GObj* fighter_gobj);

#endif