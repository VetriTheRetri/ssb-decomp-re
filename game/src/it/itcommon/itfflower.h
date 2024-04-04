#ifndef _ITFFLOWER_H_
#define _ITFFLOWER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itFFlowerAFallProcUpdate(GObj *item_gobj);
extern sb32 itFFlowerGWaitProcMap(GObj *item_gobj);
extern sb32 itFFlowerAFallProcMap(GObj *item_gobj);
extern void itFFlowerGWaitSetStatus(GObj *item_gobj);
extern void itFFlowerAFallSetStatus(GObj *item_gobj);
extern void itFFlowerFHoldSetStatus(GObj *item_gobj);
extern sb32 itFFlowerFThrowProcMap(GObj *item_gobj);
extern sb32 itFFlowerSDefaultProcHit(GObj *item_gobj);
extern void itFFlowerFThrowSetStatus(GObj *item_gobj);
extern sb32 itFFlowerFDropProcMap(GObj *item_gobj);
extern void itFFlowerFDropSetStatus(GObj *item_gobj);
extern GObj* itFFlowerMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itFFlowerWeaponFlameProcUpdate(GObj *weapon_gobj);
extern sb32 itFFlowerWeaponFlameProcMap(GObj *weapon_gobj);
extern sb32 itFFlowerWeaponFlameProcHit(GObj *weapon_gobj);
extern sb32 itFFlowerWeaponFlameProcReflector(GObj *weapon_gobj);
extern GObj* itFFlowerWeaponFlameMakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel);
extern void itFFlowerShootFlame(GObj *fighter_gobj, Vec3f *pos, s32 index, s32 ammo_sub);

#endif