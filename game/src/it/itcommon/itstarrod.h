#ifndef _ITSTARROD_H_
#define _ITSTARROD_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itStarRodAFallProcUpdate(GObj *item_gobj);
extern sb32 itStarRodGWaitProcMap(GObj *item_gobj);
extern sb32 itStarRodAFallProcMap(GObj *item_gobj);
extern void itStarRodGWaitSetStatus(GObj *item_gobj);
extern void itStarRodAFallSetStatus(GObj *item_gobj);
extern void itStarRodFHoldSetStatus(GObj *item_gobj);
extern sb32 itStarRodFThrowProcUpdate(GObj *item_gobj);
extern sb32 itStarRodFThrowProcMap(GObj *item_gobj);
extern sb32 itStarRodFThrowProcHit(GObj *item_gobj);
extern void itStarRodFThrowSetStatus(GObj *item_gobj);
extern sb32 itStarRodFDropProcMap(GObj *item_gobj);
extern void itStarRodFDropSetStatus(GObj *item_gobj);
extern GObj* itStarRodMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itStarRodWeaponStarProcUpdate(GObj *weapon_gobj);
extern sb32 itStarRodWeaponStarProcMap(GObj *weapon_gobj);
extern sb32 itStarRodWeaponStarProcHit(GObj *weapon_gobj);
extern sb32 itStarRodWeaponStarProcHop(GObj *weapon_gobj);
extern sb32 itStarRodWeaponStarProcReflector(GObj *weapon_gobj);
extern GObj* itStarRodWeaponStarMakeWeapon(GObj *fighter_gobj, Vec3f *pos, ub8 is_smash);
extern void itStarRodMakeStar(GObj *fighter_gobj, Vec3f *pos, ub8 is_smash);

#endif
