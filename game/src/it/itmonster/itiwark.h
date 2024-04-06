#ifndef _ITIWARK_H_
#define _ITIWARK_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itIwarkNAttackUpdateRock(GObj *iwark_gobj);
extern sb32 itIwarkNAttackProcUpdate(GObj *item_gobj);
extern void itIwarkNAttackInitItemVars(GObj *item_gobj);
extern void itIwarkNAttackSetStatus(GObj *item_gobj);
extern sb32 itIwarkNFlyProcUpdate(GObj *item_gobj);
extern void itIwarkNFlySetStatus(GObj *item_gobj);
extern sb32 itIwarkSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itIwarkSDefaultProcMap(GObj *item_gobj);
extern GObj* itIwarkMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itIwarkWeaponRockProcDead(GObj *weapon_gobj);
extern sb32 itIwarkWeaponRockProcUpdate(GObj *weapon_gobj);
extern sb32 itIwarkWeaponRockProcMap(GObj *weapon_gobj);
extern sb32 itIwarkWeaponRockProcHop(GObj *weapon_gobj);
extern sb32 itIwarkWeaponRockProcReflector(GObj *weapon_gobj);
extern GObj* itIwarkWeaponRockMakeWeapon(GObj *spawn_gobj, Vec3f *pos, u8 random);

#endif
