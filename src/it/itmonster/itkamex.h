#ifndef _ITKAMEX_H_
#define _ITKAMEX_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itKamexNAttackUpdateHydro(GObj *item_gobj);
extern sb32 itKamexAFallProcUpdate(GObj *item_gobj);
extern sb32 itKamexAFallProcMap(GObj *item_gobj);
extern void itKamexAFallInitItemVars(GObj *item_gobj);
extern void itKamexAFallSetStatus(GObj *item_gobj);
extern sb32 itKamexNAppearProcUpdate(GObj *item_gobj);
extern sb32 itKamexNAppearProcMap(GObj *item_gobj);
extern void itKamexNAppearSetStatus(GObj *item_gobj);
extern sb32 itKamexNAttackProcUpdate(GObj *item_gobj);
extern sb32 itKamexNAttackProcMap(GObj *item_gobj);
extern void itKamexNAttackInitItemVars(GObj *item_gobj, sb32 is_ignore_setup);
extern void itKamexNAttackSetStatus(GObj *item_gobj);
extern sb32 itKamexSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itKamexSDefaultProcMap(GObj *item_gobj);
extern void itKamexSDefaultFindTargetsSetLR(GObj *item_gobj);
extern GObj* itKamexMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itKamexWeaponHydroProcUpdate(GObj *weapon_gobj);
extern sb32 itKamexWeaponHydroProcHit(GObj *weapon_gobj);
extern sb32 itKamexWeaponHydroProcReflector(GObj *weapon_gobj);
extern GObj* itKamexWeaponHydroMakeWeapon(GObj *item_gobj, Vec3f *pos);
extern void itKamexNAttackMakeHydro(GObj *item_gobj, Vec3f *pos);

#endif
