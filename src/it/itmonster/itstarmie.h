#ifndef _ITSTARMIE_H_
#define _ITSTARMIE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itStarmieNAttackUpdateSwift(GObj *item_gobj);
extern sb32 itStarmieNAttackProcUpdate(GObj *item_gobj);
extern void itStarmieNAttackInitItemVars(GObj *item_gobj);
extern void itStarmieNAttackSetStatus(GObj *item_gobj);
extern sb32 itStarmieNFollowProcUpdate(GObj *item_gobj);
extern void itStarmieNFollowFindFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj);
extern void itStarmieNFollowInitItemVars(GObj *item_gobj);
extern void itStarmieNFollowSetStatus(GObj *item_gobj);
extern sb32 itStarmieSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itStarmieSDefaultProcMap(GObj *item_gobj);
extern GObj* itStarmieMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itStarmieWeaponSwiftProcUpdate(GObj *weapon_gobj);
extern sb32 itStarmieWeaponSwiftProcHit(GObj *weapon_gobj);
extern sb32 itStarmieWeaponSwiftProcHop(GObj *weapon_gobj);
extern sb32 itStarmieWeaponSwiftProcReflector(GObj *weapon_gobj);
extern GObj* itStarmieWeaponSwiftMakeWeapon(GObj *item_gobj, Vec3f *pos);
extern void itStarmieNAttackMakeSwift(GObj *item_gobj, Vec3f *pos);

#endif
