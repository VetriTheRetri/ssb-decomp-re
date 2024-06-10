#ifndef _ITNYARS_H_
#define _ITNYARS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itNyarsNAttackProcUpdate(GObj *item_gobj);
extern void itNyarsNAttackInitItemVars(GObj *item_gobj);
extern void itNyarsNAttackSetStatus(GObj *item_gobj);
extern sb32 itNyarsSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itNyarsSDefaultProcMap(GObj *item_gobj);
extern GObj* itNyarsMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itNyarsWeaponCoinProcUpdate(GObj *weapon_gobj);
extern sb32 itNyarsWeaponCoinProcHit(GObj *weapon_gobj);
extern sb32 itNyarsWeaponCoinProcHop(GObj *weapon_gobj);
extern sb32 itNyarsWeaponCoinProcReflector(GObj *weapon_gobj);
extern GObj* itNyarsWeaponCoinMakeWeapon(GObj *item_gobj, u8 coin_number, f32 rotate_angle);
extern void itNyarsNAttackMakeCoin(GObj *item_gobj, f32 angle);

#endif
