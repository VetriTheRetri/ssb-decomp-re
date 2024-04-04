#ifndef _ITLGUN_H_
#define _ITLGUN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itLGunAFallProcUpdate(GObj *item_gobj);
extern sb32 itLGunGWaitProcMap(GObj *item_gobj);
extern sb32 itLGunAFallProcMap(GObj *item_gobj);
extern void itLGunGWaitSetStatus(GObj *item_gobj);
extern void itLGunAFallSetStatus(GObj *item_gobj);
extern void itLGunFHoldSetStatus(GObj *item_gobj);
extern sb32 itLGunFThrowProcMap(GObj *item_gobj);
extern sb32 itLGunSDefaultProcHit(GObj *item_gobj);
extern void itLGunFThrowSetStatus(GObj *item_gobj);
extern sb32 itLGunFDropProcMap(GObj *item_gobj);
extern void itLGunFDropSetStatus(GObj *item_gobj);
extern GObj* itLGunMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itLGunWeaponAmmoProcUpdate(GObj *weapon_gobj);
extern sb32 itLGunWeaponAmmoProcMap(GObj *weapon_gobj);
extern sb32 itLGunWeaponAmmoProcHit(GObj *weapon_gobj);
extern sb32 itLGunWeaponAmmoProcHop(GObj *weapon_gobj);
extern sb32 itLGunWeaponAmmoProcReflector(GObj *weapon_gobj);
extern GObj* itLGunWeaponAmmoMakeWeapon(GObj *fighter_gobj, Vec3f *pos);
extern void itLGunMakeAmmo(GObj *fighter_gobj, Vec3f *pos);

#endif