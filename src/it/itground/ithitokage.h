#ifndef _ITHITOKAGE_H_
#define _ITHITOKAGE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itHitokageSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itHitokageNDamageProcUpdate(GObj *item_gobj);
extern sb32 itHitokageNDamageProcDead(GObj *item_gobj);
extern sb32 itHitokageSDefaultProcDamage(GObj *item_gobj);
extern GObj* itHitokageMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itHitokageWeaponFlameProcUpdate(GObj *weapon_gobj);
extern sb32 itHitokageWeaponFlameProcMap(GObj *weapon_gobj);
extern sb32 itHitokageWeaponFlameProcHit(GObj *weapon_gobj);
extern sb32 itHitokageWeaponFlameProcReflector(GObj *weapon_gobj);
extern GObj* itHitokageWeaponFlameMakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel);
extern void itHitokageSDefaultMakeFlame(GObj *item_gobj, Vec3f *pos);

#endif
