#ifndef _ITKAMEX_H_
#define _ITKAMEX_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itKamexNAttackUpdateHydro(GObj *item_gobj);
extern sb32 itKamexFallProcUpdate(GObj *item_gobj);
extern sb32 itKamexFallProcMap(GObj *item_gobj);
extern void itKamexFallInitItemVars(GObj *item_gobj);
extern void itKamexFallSetStatus(GObj *item_gobj);
extern sb32 itKamexNAppearProcUpdate(GObj *item_gobj);
extern sb32 itKamexNAppearProcMap(GObj *item_gobj);
extern void itKamexNAppearSetStatus(GObj *item_gobj);
extern sb32 itKamexNAttackProcUpdate(GObj *item_gobj);
extern sb32 itKamexNAttackProcMap(GObj *item_gobj);
extern void itKamexNAttackInitItemVars(GObj *item_gobj, sb32 is_ignore_setup);
extern void itKamexNAttackSetStatus(GObj *item_gobj);
extern sb32 itKamexCommonProcUpdate(GObj *item_gobj);
extern sb32 itKamexCommonProcMap(GObj *item_gobj);
extern void itKamexCommonFindTargetsSetLR(GObj *item_gobj);
extern GObj* itKamexMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itKamexWeaponHydroProcUpdate(GObj *weapon_gobj);
extern sb32 itKamexWeaponHydroProcHit(GObj *weapon_gobj);
extern sb32 itKamexWeaponHydroProcReflector(GObj *weapon_gobj);
extern GObj* itKamexWeaponHydroMakeWeapon(GObj *item_gobj, Vec3f *pos);
extern void itKamexNAttackMakeHydro(GObj *item_gobj, Vec3f *pos);

#endif
